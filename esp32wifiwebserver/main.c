#include "esp_wifi.h"
#include "esp_netif.h"
#include "esp_wifi_default.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "string.h"
#include "esp_http_server.h"
#include "htmlpage.h"
#include "freertos/event_groups.h"

#define credentialsbit BIT0
#define configbit BIT1
#define ipreceivedbit BIT2
#define wificonnectfailedbit BIT3

void apHandler(void *handlerArgs,esp_event_base_t base,int32_t eventId,void *eventData);
void staHandler(void *handlerArgs,esp_event_base_t base,int32_t eventId,void *eventData);
void initWifiAP();
void deinitWifiAP();
void deinitWifiSta();
void wifiTask(void *param);
void initSta( char *ssid, char *password);
esp_err_t connectHandler(httpd_req_t *req);

TaskHandle_t wifiHandle;
httpd_uri_t uriHello;
esp_netif_t *objAP,*objSTA;
httpd_handle_t serverHandle;
char ssid[128];
char password[128];
int numTries=0;
EventGroupHandle_t wifiEventBits;

void ipHandler(void *handlerArgs,esp_event_base_t base,int32_t eventId,void *eventData)
{
    if(eventId==IP_EVENT_STA_GOT_IP)
    {
        printf("GOT IP\n");
        ip_event_got_ip_t *ipEvent=(ip_event_got_ip_t *)eventData;
        printf("IPADDR=%d.%d.%d.%d\n",ipEvent->ip_info.ip.addr&255,(ipEvent->ip_info.ip.addr>>8)&255,(ipEvent->ip_info.ip.addr>>16)&255,(ipEvent->ip_info.ip.addr>>24)&255);
        xEventGroupSetBits(wifiEventBits,ipreceivedbit);
    }
    if(eventId==IP_EVENT_STA_LOST_IP)
    {
      xEventGroupClearBits(wifiEventBits,ipreceivedbit);
    }
}
void apHandler(void *handlerArgs,esp_event_base_t base,int32_t eventId,void *eventData)
{
    esp_err_t error;
    if(eventId==WIFI_EVENT_AP_STACONNECTED)
    {
        httpd_config_t serverConfig=HTTPD_DEFAULT_CONFIG();
        serverConfig.stack_size=11942;
        serverConfig.max_resp_headers=4096;
        uriHello.handler=connectHandler;
        uriHello.method=HTTP_GET;
        uriHello.uri="/";
        uriHello.user_ctx=NULL;
        error=httpd_start(&serverHandle,&serverConfig);
        if(error==ESP_OK)
        {
            printf("seerver running successfully");
        }
        httpd_register_uri_handler(serverHandle,&uriHello);
    }
    if(eventId==WIFI_EVENT_AP_STADISCONNECTED)
    {
        httpd_stop(serverHandle);
    }
}
void staHandler(void *handlerArgs,esp_event_base_t base,int32_t eventId,void *eventData)
{
   if(eventId==WIFI_EVENT_STA_WPS_ER_FAILED)
   {
    xEventGroupSetBits(wifiEventBits,wificonnectfailedbit);
    printf("Wring passwork\n");
   }
   if(eventId==WIFI_EVENT_STA_CONNECTED)
   {
    printf("connected\n");
    numTries=0;
   }
   if(eventId==WIFI_EVENT_STA_WPS_ER_TIMEOUT)
   {
    printf("failed");
    xEventGroupSetBits(wifiEventBits,wificonnectfailedbit);
   }
   if(eventId==WIFI_EVENT_STA_DISCONNECTED)
   {
    while(numTries<3)
    {
      numTries++;
      esp_wifi_connect();
    }
    printf("COnnect failed\n");
    xEventGroupSetBits(wifiEventBits,wificonnectfailedbit);
   }
}
void initWifiAP()
{
    wifi_init_config_t wifiInitConfig=WIFI_INIT_CONFIG_DEFAULT();
    esp_netif_init();
    objAP=esp_netif_create_default_wifi_ap();
    wifi_config_t config={.ap=
    {.ssid="ESP32",.password="12345678",.channel=2,.ssid_len=strlen("ESP32"),.authmode=WIFI_AUTH_WPA2_PSK,.max_connection=1,},
    };
    esp_wifi_init(&wifiInitConfig);
    esp_wifi_set_config(WIFI_IF_AP,&config);
    esp_wifi_set_mode(WIFI_MODE_AP);
    esp_wifi_start();
    esp_netif_ip_info_t ipInfo;
    esp_netif_get_ip_info(objAP,&ipInfo);
    esp_event_handler_register(WIFI_EVENT,ESP_EVENT_ANY_ID,apHandler,NULL);
    printf("IP_OF_AP-%d.%d.%d.%d\n",(ipInfo.ip.addr)&255,(ipInfo.ip.addr>>8)&255,(ipInfo.ip.addr>>16)&255,(ipInfo.ip.addr>>24)&255);
}
void initSta( char *ssid,char *password)
{
    esp_err_t error;
    wifi_init_config_t initConfig=WIFI_INIT_CONFIG_DEFAULT();
    esp_netif_init();
    objSTA=esp_netif_create_default_wifi_sta();
    esp_wifi_init(&initConfig);
    wifi_config_t wifiConfig;
    bzero(&wifiConfig,sizeof(wifiConfig));
    memcpy(wifiConfig.sta.ssid,ssid,32);
    memcpy(wifiConfig.sta.password,password,64);
    printf("s %s\n",(char *)wifiConfig.sta.ssid);
    printf("p %s\n",(char *)wifiConfig.sta.password);
    esp_wifi_set_mode(WIFI_MODE_STA);
    error=esp_wifi_set_config(WIFI_IF_STA,&wifiConfig);
    if(error==ESP_OK)
    {
      printf("config success\n");
    }
    if(error==ESP_ERR_INVALID_ARG)
    {
      printf("Inalid arg\n");
    }
    esp_event_handler_register(WIFI_EVENT,ESP_EVENT_ANY_ID,staHandler,NULL);
    esp_event_handler_register(IP_EVENT,ESP_EVENT_ANY_ID,ipHandler,NULL);
    error=esp_wifi_start();
    esp_wifi_connect();
}

void deinitWifiAP()
{
  esp_event_handler_unregister(WIFI_EVENT,ESP_EVENT_ANY_ID,apHandler);
  esp_wifi_stop();
  esp_netif_destroy(objAP);
  esp_netif_deinit();
  esp_wifi_deinit();
}
void deinitWifiSta()
{
  esp_event_handler_unregister(WIFI_EVENT,ESP_EVENT_ANY_ID,apHandler);
  esp_wifi_stop();
  esp_netif_destroy(objSTA);
  esp_netif_deinit();
  esp_wifi_deinit();
}

esp_err_t connectHandler(httpd_req_t *req)
{
   printf("Hello\n");
   char buf[128];
   char ssidl[60];
   char passwordl[60];
   if(httpd_req_get_url_query_str(req,buf,128)==ESP_ERR_NOT_FOUND)
   {
   httpd_resp_send(req,htmlPage,HTTPD_RESP_USE_STRLEN);
   return ESP_OK;
   }
   else if(httpd_req_get_url_query_str(req,buf,128)==ESP_OK)
   {
    httpd_resp_sendstr(req,"Please wait \n");
    httpd_query_key_value(buf,"ssid",ssid,60);
    httpd_query_key_value(buf,"password",password,60);
    strcpy(ssidl,ssid);
    strcpy(passwordl,password);
    printf("sid %s\n",ssid);
    printf("pwd %s\n",password);
    printf("ssid %s\n",ssid);
    printf("password %s\n",password);
    xEventGroupSetBits(wifiEventBits,credentialsbit);
    return ESP_OK;
   }
   return ESP_ERR_NOT_FOUND;//Dummy statement
}
void wifiTask(void *param)
{
  EventBits_t eventBit;
  esp_event_loop_create_default();
  nvs_flash_init();
  initWifiAP();
  while(1)
  {
    eventBit=xEventGroupWaitBits(wifiEventBits,credentialsbit,true,true,portMAX_DELAY);
    if(eventBit&&credentialsbit)
    {
      httpd_unregister_uri(serverHandle,"/");
      httpd_stop(serverHandle);
      printf("Credentials received putting wifi to station mode to check wether it connects if connection fails please reconnect to esp and provide credentials\n");
      deinitWifiAP();
      initSta(ssid,password);
    }
    eventBit=xEventGroupWaitBits(wifiEventBits,wificonnectfailedbit,true,true,portMAX_DELAY);
    if(eventBit&&wificonnectfailedbit)
    {
      printf("connecion failed please reconnect and provide correct credentials\n");
      deinitWifiSta();
      initWifiAP();
    }
  }
}
void app_main() 
{
  wifiEventBits=xEventGroupCreate();
  xTaskCreate(wifiTask,"wifiMoitor",4096,NULL,2,&wifiHandle); 
}