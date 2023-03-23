# File-Download-System
File Download System
<br/>OS: Linux
<br/>Language: C++
<br/>Libraries: OpenSSL

# Function
First register with username and password, a file with username.txt will be created. Then you can login to see file contents.
[Upload File content not implemented] 

# Run on linux terminal 
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ g++ login.cpp -lcrypto
                                                                                                                                                                       
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./a.out                   

<br/>1. Register
<br/>2. Login

<br/>Your choice: 1
<br/>Register 

<br/>Enter username: admin1
<br/>Enter password: admin1
<br/>EVP_EncryptUpdate() failed: Success
<br/>Welcome admin1!
                                                                                                                                                                       
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./a.out                   

<br/>1. Register
<br/>2. Login

<br/>Your choice: 2
<br/>Login 

<br/>Enter username: admin1
<br/>Enter password: admin1
<br/>Logg In Success!
<br/>Welcome back!

<br/>Your Files
<br/>Files: 

<br/>1. Sign Out
<br/>2. Back to menu
<br/>Your choice: 
<br/>1
