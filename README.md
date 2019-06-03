# 程序说明
c++实现，使用smtp协议发送邮件

# 功能说明
- 目前只支持QQ邮箱向QQ邮箱发送邮件
- 不支持SSL/TLS加密的mail发送，比如向google邮箱发送，google邮箱服务器会退回邮件

# 程序说明

- smtp协议默认的端口是25
- gmail默认是需要ssl加密的，国内邮箱163、sina、foxmail都不需要，所以本程序理论上是可以向除了gmail其他邮箱内发邮件的。
- 一些smtp服务器地址：
  - sina邮箱：smtp.sina.com
  - qq邮箱：smtp.qq.com
  - foxmail邮箱：smtp.foxmail.com
  - 163邮箱：smtp.163.com
  - 139邮箱：smtp.china.com
- 程序流程是：auth---->login------>send mail
- email_sender_pwd：qq邮箱要申请一个授权码，这个授权码需要用绑定的手机向指定号码发送指令获得，具体流程：
  1. 登陆qq邮箱，找到设置
  2. 邮箱设置切换到账户，往下拉，找到**POP3/IMAP/SMTP/Exchange/CardDAV/CalDAV服务**
  3. 开启**POP3/SMTP服务**
  4. 在下面温馨提示获取授权码
- 程序是release版本，build的时候选择release。
- base64加密。
- 程序是vs2008控制台程序，运行过程中杀毒程序可能拦截，保证无毒。

# 运行结果

![1559570424924](C:\Users\liunan\AppData\Local\Temp\1559570424924.png)



