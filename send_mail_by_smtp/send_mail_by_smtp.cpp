
#include "stdafx.h"
#include "smtp_client.h"
#include <iostream>
using namespace std;
int main()
{
	/*以\r\n为识别结束，分割成发件人，收件人，邮件主题，邮件内容*/
	string email_contens = "From: \"lucy\"<xxxx@126.com>\r\n\
					To: \"dasiy\"<yyyy@126.com>\r\n\
					Subject: Hello\r\n\r\n\
					test send mail\n";


	u_short server_port = 25;
	string smtp_server = "smtp.qq.com";
	string email_sender_addr = "sender@qq.com";//发送邮箱
	string email_sender_pwd = "your's password";
	string email_receiver_addr = "receiver@qq.com";//接收邮箱

	SendMail(email_receiver_addr.c_str(), email_contens.c_str(), server_port, smtp_server, email_sender_addr, email_sender_pwd, email_receiver_addr);
	system("pause");
	return 0;
}
