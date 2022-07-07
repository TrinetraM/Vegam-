const char htmlPage[]="\n"
"\n"
"<style type=\"text/css\">\n"
"    body#LoginForm{ background-image:url(\"https://hdwallsource.com/img/2014/9/blur-26347-27038-hd-wallpapers.jpg\"); background-repeat:no-repeat; background-position:center; background-size:cover; padding:10px;}\n"
"\n"
".form-heading { color:#fff; font-size:23px;}\n"
".panel h2{ color:#444444; font-size:18px; margin:0 0 8px 0;}\n"
".panel p { color:#777777; font-size:14px; margin-bottom:30px; line-height:24px;}\n"
".login-form .form-control {\n"
"  background: #f7f7f7 none repeat scroll 0 0;\n"
"  border: 1px solid #d4d4d4;\n"
"  border-radius: 4px;\n"
"  font-size: 14px;\n"
"  height: 50px;\n"
"  line-height: 50px;\n"
"}\n"
".main-div {\n"
"  background: #ffffff none repeat scroll 0 0;\n"
"  border-radius: 2px;\n"
"  margin: 10px auto 30px;\n"
"  max-width: 38%%;\n"
"  padding: 50px 70px 70px 71px;\n"
"}\n"
"\n"
".login-form .form-group {\n"
"  margin-bottom:10px;\n"
"}\n"
".login-form{ text-align:center;}\n"
".forgot a {\n"
"  color: #777777;\n"
"  font-size: 14px;\n"
"  text-decoration: underline;\n"
"}\n"
".login-form  .btn.btn-primary {\n"
"  background: #f0ad4e none repeat scroll 0 0;\n"
"  border-color: #f0ad4e;\n"
"  color: #ffffff;\n"
"  font-size: 14px;\n"
"  width: 100%%;\n"
"  height: 50px;\n"
"  line-height: 50px;\n"
"  padding: 0;\n"
"}\n"
".forgot {\n"
"  text-align: left; margin-bottom:30px;\n"
"}\n"
".botto-text {\n"
"  color: #ffffff;\n"
"  font-size: 14px;\n"
"  margin: auto;\n"
"}\n"
".login-form .btn.btn-primary.reset {\n"
"  background: #ff9900 none repeat scroll 0 0;\n"
"}\n"
".back { text-align: left; margin-top:10px;}\n"
".back a {color: #444444; font-size: 13px;text-decoration: none;}\n"
"\n"
"</style>\n"
"\n"
"<link href=\"//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css\" rel=\"stylesheet\" id=\"bootstrap-css\">\n"
"<script src=\"//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js\"></script>\n"
"<script src=\"//cdnjs.cloudflare.com/ajax/libs/jquery/2.2.4/jquery.min.js\"></script>\n"
"<!------ Include the above in your HEAD tag ---------->\n"
"\n"
"\n"
"<html>\n"
"  <head>\n"
"\n"
"  <link href=\"//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/css/bootstrap.min.css\" rel=\"stylesheet\" id=\"bootstrap-css\">\n"
"<script src=\"//maxcdn.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js\"></script>\n"
"<script src=\"//cdnjs.cloudflare.com/ajax/libs/jquery/3.2.1/jquery.min.js\"></script>\n"
"<!------ Include the above in your HEAD tag ---------->\n"
"  </head>\n"
"<body id=\"LoginForm\">\n"
"<div class=\"container\">\n"
"<!-- <h1 class=\"form-heading\">login Form</h1> -->\n"
"<div class=\"login-form\">\n"
"<div class=\"main-div\">\n"
"    <div class=\"panel\">\n"
"\n"
"        <img src=\"data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4NCjwhLS0gR2VuZXJhdG9yOiBBZG9iZSBJbGx1c3RyYXRvciAyMy4wLjYsIFNWRyBFeHBvcnQgUGx1Zy1JbiAuIFNWRyBWZXJzaW9uOiA2LjAwIEJ1aWxkIDApICAtLT4NCjxzdmcgdmVyc2lvbj0iMS4xIiBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB4bWxuczp4bGluaz0iaHR0cDovL3d3dy53My5vcmcvMTk5OS94bGluayIgeD0iMHB4IiB5PSIwcHgiDQoJIHZpZXdCb3g9IjAgMCAxNDg2IDcyOCIgc3R5bGU9ImVuYWJsZS1iYWNrZ3JvdW5kOm5ldyAwIDAgMTQ4NiA3Mjg7IiB4bWw6c3BhY2U9InByZXNlcnZlIj4NCjxzdHlsZSB0eXBlPSJ0ZXh0L2NzcyI+DQoJLnN0MHtmaWxsOiNEMTI2MkI7fQ0KCS5zdDF7ZmlsbDojQTlBQUFDO30NCgkuc3Qye2ZpbGw6IzIzMUYyMDt9DQo8L3N0eWxlPg0KPGc+DQoJPHBhdGggY2xhc3M9InN0MCIgZD0iTTEyNy42LDM1OC43bDEsMTcuNmgxLjRsNi41LTE3LjFsMTA5LjYtMjU4LjVoNzMuNEwxNTIuOSw0NTIuMUg4MS41TDI3LjksMTAwLjdIMTAxTDEyNy42LDM1OC43eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0zODkuNCw0NTcuMmMtMzQuMywwLTYwLjMtMTIuMS03OC4yLTM2LjRjLTE3LjktMjQuMy0yMy43LTU0LjktMTcuNi05MS43bDEuNS05LjdjNi40LTQwLjQsMjEuNC03Mi43LDQ1LTk3DQoJCWMyMy42LTI0LjMsNTIuMy0zNi40LDg2LjMtMzYuMmMzMiwwLDU1LjcsMTAuNyw3MC45LDMyLjJjMTUuMywyMS41LDIwLjEsNTAuMSwxNC41LDg1LjhsLTYsMzguNEgzNjEuNGMtMS4zLDE4LjQsMS43LDMzLjEsOC45LDQ0DQoJCWM3LjIsMTAuOSwxOC45LDE2LjMsMzUsMTYuM2MxMy41LDAsMjUuNS0xLjYsMzYtNC44YzEwLjUtMy4yLDIxLjgtOC4xLDM0LTE0LjdsMTEuOCw0My41Yy0xMS4xLDguNi0yNS4yLDE1LjgtNDIuNCwyMS42DQoJCUM0MjcuNyw0NTQuMyw0MDkuMiw0NTcuMiwzODkuNCw0NTcuMnogTTQxNy43LDI0MC41Yy0xMC45LDAtMjAuNSw1LTI4LjYsMTUuMWMtOC4xLDEwLjEtMTQuMiwyMy4xLTE4LjIsMzkuMmwwLjUsMS4yaDczLjhsMS02LjMNCgkJYzIuNC0xNS42LDEuNC0yNy43LTMtMzYuM0M0MzguNywyNDQuOCw0MzAuMiwyNDAuNSw0MTcuNywyNDAuNXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QwIiBkPSJNNTQwLjUsMzE4LjljOC44LTQzLjksMjIuOS03Nyw0Mi4yLTk5LjNjMTkuMy0yMi4zLDQ0LjMtMzMuNCw3NS4xLTMzLjRjMTIuNywwLDI0LjEsMi45LDM0LjMsOC43DQoJCWMxMC4xLDUuOCwxOC40LDE0LDI0LjksMjQuNWwxMC40LTI4LjRoNjAuNmwtNTAuNywyNTMuNGMtNy40LDM2LjctMjMuNSw2NC43LTQ4LjMsODQuMWMtMjQuOCwxOS40LTU2LjEsMjkuMS05My45LDI5LjENCgkJYy0xMS42LDAtMjQuMi0xLjktMzcuOC01LjVjLTEzLjYtMy43LTI1LjYtOC42LTM2LjEtMTQuN2wyMy40LTUyLjZjOC44LDUuMSwxOC4yLDksMjguMiwxMS43YzEwLDIuNywyMSw0LDMzLjEsNA0KCQljMTUuNiwwLDI4LjktNS4xLDM5LjgtMTUuMmMxMC45LTEwLjEsMTguMi0yMy43LDIxLjctNDAuOWwxLjktMTAuNGMtOC40LDcuNS0xNy4zLDEzLjItMjYuOSwxNy4yYy05LjYsNC0xOS42LDYtMzAsNg0KCQljLTI4LDAtNDktMTIuOC02My4xLTM4LjVjLTE0LjEtMjUuNy0xNy4zLTU3LjItOS44LTk0LjdMNTQwLjUsMzE4Ljl6IE02MDksMzI0Yy01LDI0LjgtNS40LDQ0LjEtMS4yLDU4DQoJCWM0LjIsMTMuOSwxNC4xLDIwLjksMjkuNywyMC45YzguNSwwLDE2LjQtMi4zLDIzLjgtNi44YzcuMy00LjUsMTMuOS0xMSwxOS43LTE5LjRsMjMuMi0xMTdjLTIuOS02LjMtNy4zLTExLjEtMTMuMy0xNC4zDQoJCWMtNi0zLjItMTMuNC00LjgtMjIuNC00LjhjLTE0LjMsMC0yNi41LDcuMS0zNi40LDIxLjJjLTEwLDE0LjItMTcuMywzMy4yLTIyLDU3LjJMNjA5LDMyNHoiLz4NCgk8cGF0aCBjbGFzcz0ic3QwIiBkPSJNOTI3LjYsNDUyLjFjLTEtNC44LTEuNy05LjgtMi4yLTE1Yy0wLjUtNS4xLTAuNy0xMC40LTAuNy0xNS43Yy05LjUsMTAuNi0yMC4yLDE5LjItMzIuMSwyNS44DQoJCWMtMTEuOSw2LjYtMjQuNyw5LjktMzguNCw5LjljLTIyLjIsMC0zOS4zLTcuMi01MS40LTIxLjdjLTEyLjEtMTQuNS0xNS43LTMzLjUtMTAuOS01Ni45YzUuNS0yNy4yLDE4LjQtNDcuNCwzOC45LTYwLjcNCgkJYzIwLjQtMTMuMyw0OC43LTE5LjksODQuNy0xOS45aDMxLjRsNC4xLTIwLjdjMi42LTEzLjMsMS44LTIzLjMtMi40LTI5LjhjLTQuMi02LjUtMTEuOS05LjgtMjMuMi05LjhjLTkuMywwLTE3LjQsMi44LTI0LjEsOC40DQoJCWMtNi44LDUuNi0xMSwxMy4zLTEyLjgsMjIuOWwtNjYuOS0wLjJsLTAuNS0xLjVjMy45LTIzLjYsMTYuNy00My4xLDM4LjYtNTguM2MyMS45LTE1LjIsNDguNy0yMi44LDgwLjQtMjIuOA0KCQljMjcuNSwwLDQ5LjMsOCw2NS4zLDI0LjFjMTYsMTYuMSwyMS4yLDM4LjUsMTUuNiw2Ny4zbC0yMS43LDEwNy45Yy0yLjcsMTMuMi00LjIsMjQuOS00LjUsMzUuMmMtMC4yLDEwLjMsMC41LDIwLjcsMi4zLDMxLjRIOTI3LjYNCgkJeiBNODgzLjYsNDA1YzguNCwwLDE2LjgtMi4yLDI1LjItNi42YzguNC00LjQsMTUuNS05LjksMjEuMS0xNi41bDguOS00NC4xaC0zMS40Yy0xMS45LDAtMjIsMy44LTMwLjQsMTEuMw0KCQljLTguNCw3LjYtMTMuNSwxNi42LTE1LjQsMjdjLTEuOSw5LjMtMSwxNi41LDIuOSwyMS41Qzg2OC40LDQwMi42LDg3NC44LDQwNSw4ODMuNiw0MDV6Ii8+DQoJPHBhdGggY2xhc3M9InN0MCIgZD0iTTExNDkuMSwyMjEuOGMxMC0xMS42LDIxLjMtMjAuNSwzNC0yNi42YzEyLjctNiwyNi44LTkuMSw0Mi4yLTkuMWMxMy44LDAsMjUuNiwzLjYsMzUuMiwxMC42DQoJCWM5LjcsNy4xLDE2LjEsMTcuOCwxOS4zLDMxLjljMTAuMS0xMy42LDIxLjktMjQsMzUuNC0zMS41YzEzLjQtNy40LDI4LjMtMTEuMSw0NC41LTExLjFjMjIuNCwwLDM5LDksNTAsMjcNCgkJYzEwLjksMTgsMTIuOSw0NSw1LjgsODAuOGwtMzEuNiwxNTguMWgtNjkuN2wzMS42LTE1OC43YzQuMi0yMS4xLDQuNC0zNS4yLDAuNi00Mi4zYy0zLjgtNy4xLTExLjUtMTAuNi0yMy0xMC42DQoJCWMtOCwwLTE1LjcsMi4zLTIyLjksNi44Yy03LjIsNC41LTEzLjgsMTAuNy0xOS41LDE4LjZjLTAuMywyLjMtMC42LDQuNi0xLDYuOWMtMC4zLDIuMy0wLjcsNC44LTEuMiw3LjRsLTM0LjMsMTcyaC02OS4zDQoJCWwzMS42LTE1OC43YzQuMi0yMC42LDQuMy0zNC42LDAuNS00MmMtMy44LTcuMy0xMS43LTExLTIzLjQtMTFjLTcuNiwwLTE0LjgsMS45LTIxLjcsNS42Yy02LjksMy43LTEzLjIsOC44LTE4LjgsMTUuMmwtMzguMSwxOTAuOA0KCQloLTY5LjNMMTA4OCwxOTFoNjQuNEwxMTQ5LjEsMjIxLjh6Ii8+DQo8L2c+DQo8Zz4NCgk8cmVjdCB4PSI3ODQuMyIgeT0iNTExLjMiIGNsYXNzPSJzdDEiIHdpZHRoPSI2MjguMiIgaGVpZ2h0PSI0Ny40Ii8+DQo8L2c+DQo8Zz4NCgk8cmVjdCB4PSIxNy4zIiB5PSI1MTAuNyIgY2xhc3M9InN0MSIgd2lkdGg9IjQ5MS4zIiBoZWlnaHQ9IjQ3LjQiLz4NCjwvZz4NCjxnPg0KCTxyZWN0IHg9IjEyMzcuOSIgeT0iNDguOSIgY2xhc3M9InN0MCIgd2lkdGg9IjcyLjgiIGhlaWdodD0iNzYuNSIvPg0KPC9nPg0KPGc+DQoJPHJlY3QgeD0iMTM4Mi44IiB5PSIyMi42IiBjbGFzcz0ic3QwIiB3aWR0aD0iNjIuNCIgaGVpZ2h0PSI1Ni43Ii8+DQo8L2c+DQo8Zz4NCgk8cmVjdCB4PSIxMzUyLjIiIHk9IjEyMC44IiBjbGFzcz0ic3QwIiB3aWR0aD0iNjEuNSIgaGVpZ2h0PSI0MS4xIi8+DQo8L2c+DQo8Zz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNNDcuOCw1OTkuOGwyNy4zLDY5LjdoMC40bDI3LjMtNjkuN2gxNC44djg1LjdIMTA2di0zMy45bDEuMi0zNC45bC0wLjMtMC4xbC0yNy44LDY4LjhoLTcuN2wtMjcuNy02OC43DQoJCWwtMC4zLDAuMWwxLjEsMzQuN3YzMy45SDMzdi04NS43SDQ3Ljh6Ii8+DQoJPHBhdGggY2xhc3M9InN0MiIgZD0iTTE3NS45LDY4NS41Yy0wLjQtMS45LTAuNy0zLjYtMC45LTUuMWMtMC4yLTEuNS0wLjMtMy0wLjQtNC40Yy0yLjIsMy4xLTUsNS42LTguNCw3LjcNCgkJYy0zLjUsMi4xLTcuMiwzLjEtMTEuMiwzLjFjLTYuNiwwLTExLjctMS43LTE1LjItNS4xYy0zLjUtMy40LTUuMi04LjEtNS4yLTE0YzAtNi4xLDIuNS0xMC45LDcuNC0xNC4zYzQuOS0zLjQsMTEuNi01LjEsMjAuMS01LjENCgkJaDEyLjZ2LTYuM2MwLTMuNy0xLjEtNi43LTMuNC04LjljLTIuMy0yLjItNS41LTMuMy05LjctMy4zYy0zLjcsMC02LjgsMC45LTkuMSwyLjljLTIuMywxLjktMy41LDQuMi0zLjUsNi45aC0xMS4xbC0wLjEtMC40DQoJCWMtMC4yLTQuNiwyLTguOSw2LjYtMTIuN2M0LjYtMy44LDEwLjYtNS44LDE3LjktNS44YzcuMiwwLDEzLDEuOCwxNy40LDUuNWM0LjQsMy43LDYuNiw5LDYuNiwxNS45djMwLjdjMCwyLjMsMC4xLDQuNSwwLjQsNi42DQoJCWMwLjIsMi4xLDAuNyw0LjIsMS4zLDYuMkgxNzUuOXogTTE1Ni42LDY3Ni45YzQuMiwwLDgtMS4xLDExLjQtMy4yYzMuNC0yLjIsNS42LTQuNiw2LjYtNy40VjY1NmgtMTNjLTQuNywwLTguNCwxLjItMTEuMiwzLjUNCgkJYy0yLjgsMi40LTQuMiw1LjEtNC4yLDguM2MwLDIuOCwwLjksNSwyLjYsNi43QzE1MC41LDY3Ni4xLDE1My4yLDY3Ni45LDE1Ni42LDY3Ni45eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0yMjIuMiw2NTZoLTcuNXYyOS41aC0xMS42di05MS45aDExLjZ2NTMuMmg3LjRsMTcuNC0yNS4xaDEzLjlsLTIxLjgsMjguOWwyNC45LDM0LjhoLTEzLjdMMjIyLjIsNjU2eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0yNzcuNCw2MDUuNWgtMTEuNnYtMTEuOGgxMS42VjYwNS41eiBNMjc3LjQsNjg1LjVoLTExLjZ2LTYzLjdoMTEuNlY2ODUuNXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNMzA1LjYsNjIxLjhsMC44LDkuNWMyLjEtMy40LDQuOC02LDgtNy45YzMuMi0xLjksNi44LTIuOCwxMC45LTIuOGM2LjksMCwxMi4yLDIsMTYsNg0KCQljMy44LDQsNS43LDEwLjIsNS43LDE4LjZ2NDAuMmgtMTEuNnYtNDBjMC01LjYtMS4xLTkuNi0zLjMtMTEuOWMtMi4yLTIuNC01LjYtMy41LTEwLjItMy41Yy0zLjMsMC02LjMsMC44LTguOSwyLjQNCgkJYy0yLjYsMS42LTQuNiwzLjgtNi4xLDYuNnY0Ni41aC0xMS42di02My43SDMwNS42eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0zNjEuMiw2NTQuOGMwLTEwLjMsMi4yLTE4LjUsNi43LTI0LjhjNC41LTYuMywxMC43LTkuNCwxOC42LTkuNGM0LDAsNy42LDAuOCwxMC43LDIuNGMzLjEsMS42LDUuNiw0LDcuNyw3DQoJCWwxLjQtOC4zaDkuMnY2NC4xYzAsOC4yLTIuNCwxNC40LTcuMSwxOC44Yy00LjgsNC40LTExLjYsNi42LTIwLjYsNi42Yy0zLjEsMC02LjQtMC40LTkuOS0xLjNjLTMuNi0wLjktNi43LTItOS40LTMuNWwyLjktOQ0KCQljMi4xLDEuMiw0LjYsMi4xLDcuNSwyLjljMi45LDAuNyw1LjgsMS4xLDguNywxLjFjNS43LDAsOS44LTEuMywxMi4zLTMuOGMyLjYtMi42LDMuOS02LjUsMy45LTExLjh2LTcuMmMtMi4xLDIuNy00LjYsNC43LTcuNSw2DQoJCWMtMi45LDEuNC02LjIsMi0xMCwyYy03LjgsMC0xNC0yLjgtMTguNC04LjVjLTQuNS01LjYtNi43LTEzLTYuNy0yMi4yVjY1NC44eiBNMzcyLjgsNjU2YzAsNi40LDEuNCwxMS41LDQuMSwxNS40DQoJCWMyLjcsMy45LDYuOCw1LjgsMTIuNCw1LjhjMy41LDAsNi40LTAuOCw4LjgtMi40YzIuNC0xLjYsNC4zLTMuOCw1LjgtNi43di0yOS4zYy0xLjUtMi43LTMuNC00LjktNS44LTYuNA0KCQljLTIuNC0xLjYtNS4zLTIuNC04LjctMi40Yy01LjUsMC05LjcsMi4zLTEyLjQsN2MtMi44LDQuNi00LjEsMTAuNi00LjEsMTcuOFY2NTZ6Ii8+DQoJPHBhdGggY2xhc3M9InN0MiIgZD0iTTUxNS4xLDY0Ny42SDQ3NnYzNy45aC0xMS42di04NS43aDU2Ljd2OS4xSDQ3NnYyOS42aDM5LjFWNjQ3LjZ6Ii8+DQoJPHBhdGggY2xhc3M9InN0MiIgZD0iTTU2OS43LDY4NS41Yy0wLjQtMS45LTAuNy0zLjYtMC45LTUuMWMtMC4yLTEuNS0wLjMtMy0wLjQtNC40Yy0yLjIsMy4xLTUsNS42LTguNCw3LjcNCgkJYy0zLjUsMi4xLTcuMiwzLjEtMTEuMiwzLjFjLTYuNiwwLTExLjctMS43LTE1LjItNS4xYy0zLjUtMy40LTUuMi04LjEtNS4yLTE0YzAtNi4xLDIuNS0xMC45LDcuNC0xNC4zYzQuOS0zLjQsMTEuNi01LjEsMjAuMS01LjENCgkJaDEyLjZ2LTYuM2MwLTMuNy0xLjEtNi43LTMuNC04LjljLTIuMy0yLjItNS41LTMuMy05LjctMy4zYy0zLjcsMC02LjgsMC45LTkuMSwyLjljLTIuMywxLjktMy41LDQuMi0zLjUsNi45aC0xMS4xbC0wLjEtMC40DQoJCWMtMC4yLTQuNiwyLTguOSw2LjYtMTIuN2M0LjYtMy44LDEwLjYtNS44LDE3LjktNS44YzcuMiwwLDEzLDEuOCwxNy40LDUuNWM0LjQsMy43LDYuNiw5LDYuNiwxNS45djMwLjdjMCwyLjMsMC4xLDQuNSwwLjQsNi42DQoJCWMwLjIsMi4xLDAuNyw0LjIsMS4zLDYuMkg1NjkuN3ogTTU1MC40LDY3Ni45YzQuMiwwLDgtMS4xLDExLjQtMy4yYzMuNC0yLjIsNS42LTQuNiw2LjYtNy40VjY1NmgtMTNjLTQuNywwLTguNCwxLjItMTEuMiwzLjUNCgkJYy0yLjgsMi40LTQuMiw1LjEtNC4yLDguM2MwLDIuOCwwLjksNSwyLjYsNi43QzU0NC4zLDY3Ni4xLDU0Nyw2NzYuOSw1NTAuNCw2NzYuOXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNNjIyLjcsNjc3LjZjMy44LDAsNy4yLTEuMiwxMC4yLTMuNmMyLjktMi40LDQuNC01LjMsNC40LTguN2gxMC40bDAuMSwwLjNjMC4yLDUuNS0yLjMsMTAuNC03LjMsMTQuNw0KCQljLTUuMSw0LjMtMTEsNi40LTE3LjgsNi40Yy05LjMsMC0xNi40LTMtMjEuMy05LjFjLTQuOS02LTcuNC0xMy42LTcuNC0yMi44di0yLjVjMC05LjEsMi41LTE2LjYsNy40LTIyLjdjNC45LTYuMSwxMi05LjEsMjEuMi05LjENCgkJYzcuNSwwLDEzLjUsMi4yLDE4LjMsNi42YzQuNyw0LjQsNyw5LjgsNi45LDE2LjJsLTAuMSwwLjNoLTEwLjVjMC0zLjktMS40LTcuMi00LjEtOS45Yy0yLjgtMi43LTYuMi00LjEtMTAuNC00LjENCgkJYy02LjEsMC0xMC40LDIuMi0xMy4xLDYuNWMtMi42LDQuNC0zLjksOS43LTMuOSwxNi4xdjIuNWMwLDYuNSwxLjMsMTEuOSwzLjksMTYuM0M2MTIuMiw2NzUuNCw2MTYuNiw2NzcuNiw2MjIuNyw2NzcuNnoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNNjc2LjEsNjA2LjR2MTUuNGgxMi4xdjguNmgtMTIuMXYzOC43YzAsMywwLjYsNS4xLDEuOSw2LjNjMS4yLDEuMiwyLjksMS44LDQuOSwxLjhjMC43LDAsMS40LTAuMSwyLjItMC4yDQoJCWMwLjgtMC4yLDEuNS0wLjQsMi4xLTAuNmwxLjUsNy45Yy0wLjksMC43LTIuMSwxLjMtMy44LDEuN2MtMS43LDAuNS0zLjMsMC43LTUsMC43Yy00LjcsMC04LjUtMS40LTExLjItNC4zDQoJCWMtMi44LTIuOC00LjItNy4zLTQuMi0xMy40di0zOC43aC0xMC4xdi04LjZoMTAuMXYtMTUuNEg2NzYuMXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNNjk5LjgsNjUzYzAtOS40LDIuNS0xNy4yLDcuNy0yMy4zYzUuMS02LjEsMTItOS4yLDIwLjgtOS4yYzguOCwwLDE1LjgsMywyMC45LDkuMWM1LjEsNi4xLDcuNywxMy44LDcuNywyMy4zDQoJCXYxLjNjMCw5LjUtMi42LDE3LjMtNy43LDIzLjNjLTUuMSw2LTEyLDkuMS0yMC44LDkuMWMtOC44LDAtMTUuOC0zLTIwLjktOS4xYy01LjEtNi4xLTcuNy0xMy44LTcuNy0yMy4zVjY1M3ogTTcxMS40LDY1NC4zDQoJCWMwLDYuNywxLjQsMTIuMyw0LjMsMTYuN2MyLjgsNC40LDcuMSw2LjYsMTIuNyw2LjZjNS41LDAsOS43LTIuMiwxMi42LTYuNmMyLjktNC40LDQuMy0xMCw0LjMtMTYuN1Y2NTNjMC02LjctMS40LTEyLjItNC4zLTE2LjYNCgkJYy0yLjktNC40LTcuMS02LjYtMTIuNy02LjZjLTUuNSwwLTkuNywyLjItMTIuNiw2LjZjLTIuOCw0LjQtNC4zLDEwLTQuMywxNi42VjY1NC4zeiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik04MDEuMiw2MzJsLTUuOS0wLjRjLTMuMSwwLTUuNiwwLjctNy43LDIuMmMtMi4xLDEuNS0zLjcsMy41LTQuOSw2LjF2NDUuNUg3NzF2LTYzLjdoMTAuNGwxLjEsOS4zDQoJCWMxLjgtMy4zLDQtNS45LDYuNy03LjdjMi42LTEuOSw1LjctMi44LDkuMi0yLjhjMC45LDAsMS43LDAuMSwyLjUsMC4yYzAuOCwwLjEsMS40LDAuMywxLjksMC40TDgwMS4yLDYzMnoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNODI0LjksNjA1LjVoLTExLjZ2LTExLjhoMTEuNlY2MDUuNXogTTgyNC45LDY4NS41aC0xMS42di02My43aDExLjZWNjg1LjV6Ii8+DQoJPHBhdGggY2xhc3M9InN0MiIgZD0iTTg2OS4yLDY4Ni43Yy04LjksMC0xNS45LTMtMjEuMi04LjljLTUuMi01LjktNy45LTEzLjYtNy45LTIzdi0yLjZjMC05LjEsMi43LTE2LjYsOC4xLTIyLjYNCgkJYzUuNC02LDExLjgtOSwxOS4yLTljOC42LDAsMTUuMSwyLjYsMTkuNSw3LjhjNC40LDUuMiw2LjYsMTIuMSw2LjYsMjAuN3Y3LjJoLTQxLjRsLTAuMiwwLjNjMC4xLDYuMSwxLjcsMTEuMSw0LjYsMTUuMQ0KCQljMywzLjksNy4yLDUuOSwxMi41LDUuOWMzLjksMCw3LjQtMC42LDEwLjMtMS43YzMtMS4xLDUuNS0yLjcsNy43LTQuNmw0LjUsNy41Yy0yLjMsMi4zLTUuMyw0LjEtOSw1LjYNCgkJQzg3OSw2ODYsODc0LjUsNjg2LjcsODY5LjIsNjg2Ljd6IE04NjcuNCw2MjkuN2MtMy45LDAtNy4yLDEuNi0xMCw0LjljLTIuNywzLjMtNC40LDcuNC01LjEsMTIuM2wwLjEsMC4zaDI5LjR2LTEuNQ0KCQljMC00LjUtMS4yLTguMy0zLjctMTEuNEM4NzUuOCw2MzEuMyw4NzIuMiw2MjkuNyw4NjcuNCw2MjkuN3oiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNOTQzLjYsNjY4LjVjMC0yLjYtMS00LjYtMi45LTYuM2MtMS45LTEuNy01LjYtMy4xLTExLjEtNC4zYy03LjctMS43LTEzLjUtNC0xNy41LTYuOQ0KCQljLTMuOS0yLjktNS44LTYuOC01LjgtMTEuOGMwLTUuMiwyLjItOS42LDYuNi0xMy4yYzQuNC0zLjYsMTAuMS01LjUsMTcuMi01LjVjNy40LDAsMTMuMywxLjksMTcuNyw1LjdjNC40LDMuOCw2LjUsOC40LDYuMywxMy45DQoJCWwtMC4xLDAuM2gtMTEuMWMwLTIuOC0xLjItNS4zLTMuNS03LjVjLTIuMy0yLjItNS40LTMuMy05LjMtMy4zYy00LjEsMC03LjIsMC45LTkuMiwyLjdjLTIsMS44LTMsNC0zLDYuNWMwLDIuNSwwLjksNC41LDIuNiw1LjkNCgkJYzEuOCwxLjUsNS40LDIuOCwxMC44LDMuOWM4LDEuNywxNCw0LjEsMTgsN2MzLjksMyw1LjksNi45LDUuOSwxMS45YzAsNS43LTIuMywxMC4yLTYuOCwxMy43Yy00LjYsMy41LTEwLjYsNS4yLTE3LjksNS4yDQoJCWMtOC4xLDAtMTQuNS0yLjEtMTkuMi02LjJjLTQuNy00LjEtNi45LTguOS02LjYtMTQuNGwwLjEtMC4zaDExLjFjMC4yLDQuMSwxLjcsNy4xLDQuNiw5YzIuOSwxLjksNi4yLDIuOSwxMC4xLDIuOQ0KCQljNC4xLDAsNy40LTAuOCw5LjctMi41Qzk0Mi40LDY3My40LDk0My42LDY3MS4yLDk0My42LDY2OC41eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0xMDQ4LjQsNjYzLjljMC0zLjktMS41LTcuMi00LjQtOS44Yy0zLTIuNi04LjItNC44LTE1LjctNi42Yy05LjEtMi4yLTE2LjEtNS40LTIxLjItOS42DQoJCWMtNS4xLTQuMi03LjYtOS41LTcuNi0xNS45YzAtNi43LDIuNy0xMi4zLDguMi0xNi44YzUuNS00LjUsMTIuNi02LjcsMjEuMy02LjdjOS40LDAsMTYuOSwyLjYsMjIuNCw3LjdjNS41LDUuMSw4LjIsMTEuMSw4LDE3LjkNCgkJbC0wLjEsMC40aC0xMS4xYzAtNS0xLjctOS4xLTUtMTIuMmMtMy4zLTMuMS04LjEtNC42LTE0LjMtNC42Yy01LjgsMC0xMC4yLDEuMy0xMy4zLDMuOWMtMy4xLDIuNi00LjYsNi00LjYsMTAuMg0KCQljMCwzLjcsMS42LDYuOCw1LDkuM2MzLjMsMi41LDguOCw0LjcsMTYuMyw2LjZjOSwyLjIsMTUuOSw1LjUsMjAuNiw5LjljNC43LDQuMyw3LjEsOS44LDcuMSwxNi4yYzAsNi45LTIuOCwxMi41LTguNSwxNi43DQoJCWMtNS42LDQuMi0xMyw2LjMtMjIuMSw2LjNjLTguNiwwLTE2LjEtMi4zLTIyLjctN2MtNi42LTQuNi05LjgtMTAuOC05LjYtMTguNmwwLjEtMC40aDExLjFjMCw1LjUsMiw5LjcsNi4xLDEyLjUNCgkJYzQsMi45LDkuMSw0LjMsMTUsNC4zYzUuOCwwLDEwLjUtMS4yLDEzLjktMy43QzEwNDYuNyw2NzEuNSwxMDQ4LjQsNjY4LjEsMTA0OC40LDY2My45eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0xMDg1LjEsNjIxLjhsMC44LDguNGMyLjEtMyw0LjctNS40LDcuOS03YzMuMi0xLjcsNi45LTIuNSwxMS4yLTIuNWM0LjIsMCw3LjksMSwxMC45LDIuOQ0KCQljMywyLDUuMyw0LjksNi44LDguOGMyLTMuNiw0LjYtNi41LDgtOC42YzMuMy0yLjEsNy4xLTMuMiwxMS41LTMuMmM2LjUsMCwxMS42LDIuMiwxNS40LDYuN2MzLjgsNC41LDUuNywxMS4yLDUuNywyMC4xdjM4LjFoLTExLjYNCgkJdi0zOC4yYzAtNi4zLTEuMS0xMC43LTMuMy0xMy4zYy0yLjEtMi42LTUuNC0zLjktOS42LTMuOWMtNCwwLTcuMiwxLjQtOS42LDQuMWMtMi41LDIuOC0zLjksNi4yLTQuMywxMC40djAuNXY0MC41aC0xMS43di0zOC4yDQoJCWMwLTYtMS4xLTEwLjMtMy4zLTEzLjFjLTIuMi0yLjgtNS40LTQuMS05LjYtNC4xYy0zLjUsMC02LjQsMC43LTguNywyLjJjLTIuMywxLjUtNCwzLjUtNS4yLDYuMXY0Ny4yaC0xMS42di02My43SDEwODUuMXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNMTIxOS4zLDY4NS41Yy0wLjQtMS45LTAuNy0zLjYtMC45LTUuMWMtMC4yLTEuNS0wLjMtMy0wLjQtNC40Yy0yLjIsMy4xLTUsNS42LTguNSw3LjcNCgkJYy0zLjUsMi4xLTcuMiwzLjEtMTEuMiwzLjFjLTYuNiwwLTExLjctMS43LTE1LjItNS4xYy0zLjUtMy40LTUuMi04LjEtNS4yLTE0YzAtNi4xLDIuNS0xMC45LDcuNC0xNC4zYzQuOS0zLjQsMTEuNi01LjEsMjAtNS4xDQoJCWgxMi42di02LjNjMC0zLjctMS4xLTYuNy0zLjQtOC45Yy0yLjMtMi4yLTUuNS0zLjMtOS43LTMuM2MtMy43LDAtNi44LDAuOS05LjEsMi45Yy0yLjMsMS45LTMuNSw0LjItMy41LDYuOWgtMTEuMWwtMC4xLTAuNA0KCQljLTAuMi00LjYsMi04LjksNi42LTEyLjdjNC42LTMuOCwxMC42LTUuOCwxNy45LTUuOGM3LjIsMCwxMywxLjgsMTcuNCw1LjVjNC40LDMuNyw2LjYsOSw2LjYsMTUuOXYzMC43YzAsMi4zLDAuMSw0LjUsMC40LDYuNg0KCQljMC4yLDIuMSwwLjcsNC4yLDEuMyw2LjJIMTIxOS4zeiBNMTIwMC4xLDY3Ni45YzQuMiwwLDgtMS4xLDExLjQtMy4yYzMuNC0yLjIsNS42LTQuNiw2LjYtNy40VjY1NmgtMTNjLTQuNywwLTguNCwxLjItMTEuMiwzLjUNCgkJYy0yLjgsMi40LTQuMiw1LjEtNC4yLDguM2MwLDIuOCwwLjksNSwyLjcsNi43QzExOTQsNjc2LjEsMTE5Ni42LDY3Ni45LDEyMDAuMSw2NzYuOXoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNMTI3Ni42LDYzMmwtNi0wLjRjLTMuMSwwLTUuNiwwLjctNy43LDIuMmMtMi4xLDEuNS0zLjcsMy41LTQuOSw2LjF2NDUuNWgtMTEuNnYtNjMuN2gxMC40bDEuMSw5LjMNCgkJYzEuOC0zLjMsNC01LjksNi43LTcuN2MyLjYtMS45LDUuNy0yLjgsOS4yLTIuOGMwLjksMCwxLjcsMC4xLDIuNSwwLjJjMC44LDAuMSwxLjQsMC4zLDEuOSwwLjRMMTI3Ni42LDYzMnoiLz4NCgk8cGF0aCBjbGFzcz0ic3QyIiBkPSJNMTMwNC4xLDYwNi40djE1LjRoMTIuMXY4LjZoLTEyLjF2MzguN2MwLDMsMC42LDUuMSwxLjksNi4zYzEuMiwxLjIsMi45LDEuOCw0LjksMS44YzAuNywwLDEuNC0wLjEsMi4yLTAuMg0KCQljMC44LTAuMiwxLjUtMC40LDIuMS0wLjZsMS41LDcuOWMtMC45LDAuNy0yLjEsMS4zLTMuOCwxLjdjLTEuNywwLjUtMy40LDAuNy01LDAuN2MtNC43LDAtOC41LTEuNC0xMS4yLTQuMw0KCQljLTIuOC0yLjgtNC4yLTcuMy00LjItMTMuNHYtMzguN2gtMTAuMXYtOC42aDEwLjF2LTE1LjRIMTMwNC4xeiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0xMzU2LjksNjg2LjdjLTguOSwwLTE1LjktMy0yMS4yLTguOWMtNS4yLTUuOS03LjktMTMuNi03LjktMjN2LTIuNmMwLTkuMSwyLjctMTYuNiw4LjEtMjIuNg0KCQljNS40LTYsMTEuOC05LDE5LjItOWM4LjYsMCwxNS4xLDIuNiwxOS41LDcuOGM0LjQsNS4yLDYuNiwxMi4xLDYuNiwyMC43djcuMmgtNDEuNGwtMC4yLDAuM2MwLjEsNi4xLDEuNywxMS4xLDQuNiwxNS4xDQoJCWMzLDMuOSw3LjIsNS45LDEyLjUsNS45YzMuOSwwLDcuNC0wLjYsMTAuMy0xLjdjMy0xLjEsNS41LTIuNyw3LjctNC42bDQuNSw3LjVjLTIuMywyLjMtNS4zLDQuMS05LDUuNg0KCQlDMTM2Ni43LDY4NiwxMzYyLjIsNjg2LjcsMTM1Ni45LDY4Ni43eiBNMTM1NS4xLDYyOS43Yy0zLjksMC03LjIsMS42LTEwLDQuOWMtMi43LDMuMy00LjQsNy40LTUuMSwxMi4zbDAuMSwwLjNoMjkuNHYtMS41DQoJCWMwLTQuNS0xLjItOC4zLTMuNy0xMS40QzEzNjMuNSw2MzEuMywxMzU5LjksNjI5LjcsMTM1NS4xLDYyOS43eiIvPg0KCTxwYXRoIGNsYXNzPSJzdDIiIGQ9Ik0xNDI0LjQsNjMybC01LjktMC40Yy0zLjEsMC01LjYsMC43LTcuNywyLjJjLTIuMSwxLjUtMy43LDMuNS00LjksNi4xdjQ1LjVoLTExLjZ2LTYzLjdoMTAuNGwxLjEsOS4zDQoJCWMxLjgtMy4zLDQtNS45LDYuNy03LjdjMi43LTEuOSw1LjctMi44LDkuMi0yLjhjMC45LDAsMS43LDAuMSwyLjUsMC4yYzAuOCwwLjEsMS40LDAuMywxLjksMC40TDE0MjQuNCw2MzJ6Ii8+DQo8L2c+DQo8L3N2Zz4NCg==\" />\n"
"   <!-- <h2>Login Form</h2> -->\n"
"   <p style=\"font-weight: bold;font-size: 30px;margin-top: 15px;color: #ddd;\">Please Fill the Form</p>\n"
"   </div>\n"
"    <form id=\"Login\">\n"
"\n"
"        <div class=\"form-group\">\n"
"\n"
"\n"
"            <input type=\"text\" class=\"form-control\" name=\"ssid\" placeholder=\"Enter your SSID \">\n"
"\n"
"        </div>\n"
"\n"
"        <div class=\"form-group\">\n"
"\n"
"            <input type=\"password\" class=\"form-control\" name=\"password\"  placeholder=\"Enter your Password\">\n"
"\n"
"        </div>\n"
"        <!-- <div class=\"forgot\">\n"
"        <a href=\"reset.html\">Forgot password?</a>\n"
"</div> -->\n"
"        <!-- <button type=\"submit\"  class=\"btn btn-primary\" style=\"background-color: #1d2a4e!important;border: 1px solid #1d2a4e;\"></button> -->\n"
"        <input type=\"submit\" name=\"submit\" value=\"Submit\" style=\"background-color: #1d2a4e!important;border: 1px solid #1d2a4e;\" class=\"btn btn-primary\">\n"
"    </form>\n"
"    </div>\n"
"\n"
"</div></div></div>\n"
"\n"
"\n"
"</body>\n"
"</html>\n"
"";