# File-Download-System
File Download System
<br/>OS: Linux
<br/>Language: C++
<br/>Library: OpenSSL

# Function
#Login.cpp
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

#maine.cpp
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ g++ maine.cpp -o my_program -lcrypto
                                                                                                                                                                       
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./my_program                        
<br/>Filekey for file1.txt: ���`�hԃ��4H��C�����Z'X�
<br/>                                              w5o�
<br/>Filekey for file2.pdf: �$Z|�@"�
<br/>oAB]_P)��(}�
<br/>
<br/>Filekey for file3.jpg: ����     ��D����F��*���rE�^�к7
<br/>Available files:
<br/>file1.txt
<br/>file2.pdf
<br/>file3.jpg
<br/>Enter your username: user1
<br/>Enter your password: password1
<br/>Enter the name of the file you want to download: file1.txt
<br/>File key in vector: ���`�hԃ��4H��C�����Z'X�
<br/>                                           w5o�
<br/>File key converted: ���`�hԃ��4H��C�����Z'X�
<br/>                                           w5o�
<br/>File downloaded successfully.
                                                                                                                                                                       
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./my_program                        
<br/>Filekey for file1.txt: �<�((����W1*a
<br/>                                    �kI�%�F▒QT���+�
<br/>Filekey for file2.pdf: +t�x8�G����F�����I��n5*"�c���
<br/>Filekey for file3.jpg: }Q�Q_Hfs�� �4��2���`���%td'��
<br/>Available files:
<br/>file1.txt
<br/>file2.pdf
<br/>file3.jpg
<br/>Enter your username: user2
<br/>Enter your password: password2
<br/>Enter the name of the file you want to download: file2.pdf
<br/>File key in vector: +t�x8�G����F�����I��n5*"�c���
<br/>File key converted: +t�x8�G����F�����I��n5*"�c���
<br/>File downloaded successfully.
                                                                                                                                                                       
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./my_program
<br/>Filekey for file1.txt: �        Z�X��ڮ�˷&R���_Aa*�/�2�K�.h
<br/>Filekey for file2.pdf: w�b��!�vQ�րh>UH�▒we���m���
<br/>Filekey for file3.jpg: �~ػ2U�@���I�V�
<br/>+�ƹ���
<br/>      �ׯ�]
<br/>Available files:
<br/>file1.txt
<br/>file2.pdf
<br/>file3.jpg
<br/>Enter your username: user3
<br/>Enter your password: password3
<br/>Enter the name of the file you want to download: file3.jpg
<br/>File key in vector: �~ػ2U�@���I�V�
<br/>+�ƹ���
<br/>      �ׯ�]
<br/>File key converted: �~ػ2U�@���I�V�
<br/>+�ƹ���
<br/>      �ׯ�]
<br/>File downloaded successfully.

