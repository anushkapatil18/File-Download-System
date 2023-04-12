<h1 align="center">File Download System</h1>
<p align="center">
<img width="25%" src="https://mma.prnewswire.com/media/352910/visteon_corporation_logo.jpg?p=facebook" alt="logo">
</p>


[![File Badge](https://img.shields.io/badge/Project-File%20Download%20System-orange?style=for-the-badge&logo=github)](https://github.com/anushkapatil18/File-Download-System)

## :sparkles: Project Information
[![Language Used](https://img.shields.io/badge/Build-CPP,%20OpenSSL-blue)](https://github.com/anushkapatil18/File-Download-System)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![Build](https://img.shields.io/badge/status-passing-green)](https://github.com/anushkapatil18/File-Download-System)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![Operating System](https://img.shields.io/badge/Operating%20System-Linux-yellow)](https://github.com/anushkapatil18/File-Download-System)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![Libraries Used](https://img.shields.io/badge/Libraries%20Used-OpenSSL%20AEM,%20RSA,%20AES,%20RAND-orange)](https://github.com/anushkapatil18/File-Download-System)
<br>
<hr>

### :sparkles:About the Project
Our team is developing a secure method for online document exchange. 
- A content server and an authentication server are the system's two primary bases.

#### Content Server 
- On the content server, users can reliably store and access their encrypted data. 
- When a user uploads a file to the server, the server generates a random file key and uses it to encrypt the file using AES-CBC. 
- After encrypting the file's key with RSA-OAEP and the user's public key, the encrypted key is stored on the server. 
- Each file on the server is associated with an access control list (ACL) that specifies which users are authorised to view the file. 
- The ACL is constructed using a vector of User objects, each of which contains a user ID and password.

#### Authentication Server
- The authentication server manages account information and credentials. 
- The server maintains a user's username and password in an unordered_map when the user registers for a server. 
- Before granting access to files on the content server, the authentication server verifies the credentials of the user. 
- If the authentication was successful, the content server will verify the user's access privileges to the file based on the ACL. 'Once the content server has validated the user's credentials, it will retrieve the encrypted file key from its storage, decrypt it with the user's private key, and then use the decrypted file key to decrypt the file.

The above code contains the classes User, ACL, and ContentServer that constitute the content server's implementation. Using the AES-CBC encryption/decryption utilities, it is possible to encrypt and decrypt files. This project's overarching objective is to provide a secure method for file sharing by limiting access to only those who require it using a combination of symmetric and asymmetric encryption and authentication.

<hr>


### :sparkles: Modules and Explanation

## Encryption Module

1. First, a random salt is generated. This is a sequence of random bytes that will be used as part of the encryption process.
2. The password is hashed using a secure one-way hash function, along with the salt. The resulting hash value is called the "key".
3. A new initialization vector (IV) is generated. This is another sequence of random bytes that is used to ensure that each encryption operation produces a unique ciphertext, even if the same plaintext is encrypted multiple times.
4. The plaintext message is padded to a multiple of the block size (which is typically 128 bits for AES). This ensures that the plaintext is a fixed size that can be divided into blocks.
5. The plaintext message is encrypted using AES-256 in CBC mode. CBC stands for Cipher Block Chaining, which means that each block of plaintext is XORed with the previous block's ciphertext before being encrypted. The IV is XORed with the first plaintext block before encryption.
6. The resulting ciphertext is concatenated with the salt and IV and encoded using Base64. The salt and IV are included with the ciphertext to allow the decryption process to reproduce the same key and IV used for encryption.
7. That's a high-level overview of the encryption process used in this code.

<br>
<hr>

## :sparkles:Take a look at our High Level Design
<p align="center">
<img  src="https://user-images.githubusercontent.com/72455881/231430541-cd34dc5d-6e72-4059-8a8b-a109d937a81d.png" alt="logo">
  
</p>

<br>
<hr>

## :sparkles: Instructions for Cloning this Repository Locally
- Use the command: `git clone https://github.com/anushkapatil18/File-Download-System.git`
- Navigate to **How to Run Section** for the next steps !

<hr>

## :sparkles: How to Run This code ?

## Function
#### Login.cpp
- First register with username and password, a file with username.txt will be created. 
- Then you can login to see file contents.
[Upload File content not implemented] 

# Run on linux terminal 
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ g++ login.cpp -lcrypto
             
```cmd
g++ login.cpp -lcrypto
```

<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ ./a.out                   

```cmd
./a.out
```

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

# main.cpp
<br/>┌──(kali㉿kali)-[~/Desktop/CodeChallenge]
<br/>└─$ g++ maine.cpp -o my_program -lcrypto

```cmd
g++ maine.cpp -o my_program -lcrypto
```
                                                                                                                                                                    
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
<br>

<hr>

## :sparkles: Instructions to contribute 

To contribute fork this repository and clone it. Make changes and create a pull request. Follow the step below to contribute.

#### Add your email and user name in git bash 
`$ git config --global user.name "YOUR NAME"`
<br>
` $ git config --global user.email "YOUR EMAIL ADDRESS"`

#### Fork the repo
On the upper right you can see a option to fork the repository. Fork it to make changes. 

#### Clone the project
Use the below command to clone the repo into your local system.

` $ git clone https://github.com/anushkapatil18/File-Download-System.git `

#### Add upstream to repository 
`$ cd <your-forked-project-folder>`<br>
`$ git remote add upstream https://github.com/anushkapatil18/File-Download-System.git` <br>
`$ git checkout main`<br>
`$ git fetch upstream`<br>
`$ git merge upstream/main`<br>
`$ git push origin main`<br>

#### Creating branch for the new change on feature or bug fix
`$ git checkout -b <feature-branch>`<br>
`$ git add --all`<br>
`$ git commit -m "<commit message>"`<br>

#### Creating pull request
`$ git push origin main`

## :sparkles: Get in touch with us 
<a href="https://github.com/anushkapatil18 " target="_blank"><img src="https://img.shields.io/badge/github-000000?&style=for-the-badge&logo=github&logoColor=white&alt=github" /></a>
 <a href="mailto:shethhariket@gmail.com "><img  alt="Gmail" src="https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white" />

## :sparkles: License
