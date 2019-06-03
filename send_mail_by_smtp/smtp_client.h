#pragma once

#include <windows.h>
#include <WinSock.h>
#include <iostream>
using namespace std;

// 协议中加密部分使用的是base64方法
char ConvertToBase64(char c6);
void EncodeBase64(char *dbuf, char *buf128, int len);
void SendMail(const char *email, const char *body, u_short server_port, string smtp_server, string email_sender_addr, string email_sender_pwd, string email_receiver_addr);
int  OpenSocket(struct sockaddr *addr);



