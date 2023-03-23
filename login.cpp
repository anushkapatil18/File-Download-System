#include<iostream>
#include<openssl/evp.h>
#include<openssl/conf.h>
#include<string.h>
#include<fstream>

using namespace std;

//encryption AES
int encrypt(unsigned char* text,int text_len, unsigned char* key,unsigned char* cipher){
	int cipher_len = 0;
	int len = 0;
	
	EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
	
	if(!ctx){
		perror("EVP_CIPHER_CTX_new() failed");
		exit(-1);
	}
	
	if(!EVP_EncryptInit_ex(ctx,EVP_aes_128_ecb(),NULL,key,NULL)){
		perror("EVP_EncryptInit_ex() failed");
		exit(-1);
	}
	
	if(EVP_EncryptUpdate(ctx,cipher,&len,text,text_len)){
		perror("EVP_EncryptUpdate() failed");
		
	}
	cipher_len += len;
	if(!EVP_EncryptFinal_ex(ctx,cipher+len,&len)){
		perror("EVP_EncryptFinal_ex() failed");
		exit(-1);
	}
	
	cipher_len += len;
	EVP_CIPHER_CTX_free(ctx);
	
	return cipher_len;
}

//decryption AES
int decrypt(unsigned char* cipher,int cipher_len,unsigned char* key,unsigned char* text){
	int text_len=0;
	int len=0;
	
	EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
	
	if(!ctx){
		perror("EVP_CIPHER_CTX_new() failed");
		exit(-1);
	}
	if(!EVP_DecryptInit_ex(ctx,EVP_aes_128_ecb(),NULL,key,NULL)){
		perror("EVP_DecryptInit_ex() failed");
		exit(-1);
	}
	if(!EVP_DecryptUpdate(ctx,text,&len,cipher,cipher_len)){
		perror("EVP_DecryptUpdate() failed");
		
	}
	text_len += len;
	
	if(!EVP_DecryptFinal(ctx,text+len,&len)){
		perror("EVP_DecryptFinal() failed");
		exit(-1);
	}
	
	text_len += len;
	EVP_CIPHER_CTX_free(ctx);
	return text_len;
}

int main(){
	//key used to encrypt and decrypt password
	unsigned char* key = (unsigned char*)"0123456789abcdef";
	
	int ch;
	string user,pass;
	int cipher_len,text_len;
	unsigned char* text;
	ofstream file;
	cout<<endl;
	cout<<"1. Register"<<endl;
	cout<<"2. Login"<<endl;
	cout<<endl;
	cout<<"Your choice: ";
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Register "<<endl;
			cout<<endl;
			//credentials
			cout<<"Enter username: ";
			cin>>user;
			cout<<"Enter password: ";
			cin>>pass;
			
			//encryption of password 
			text = (unsigned char*)pass.c_str();
			text_len = strlen((const char*)text);
			unsigned char cipher[64];
			cipher_len = encrypt(text,text_len,key,cipher);
	
	
			//write inside file uername, cipher length, cipher  after encryption with file name as username.txt
			file.open(user+".txt");
			file<<user<<endl<<to_string(cipher_len)<<endl;
			file.write((char *)cipher,sizeof(cipher));
			file.close();
			cout<<"Welcome "<<user<<"!"<<endl;
			break;
			
		case 2:
			cout<<"Login "<<endl;
			cout<<endl;
			cout<<"Enter username: ";
			cin>>user;
			cout<<"Enter password: ";
			cin>>pass;
			//read from file uername,cipher length, cipher to decrypt 
			string un,ci;
			ifstream read(user+".txt");
			getline(read,un);
			getline(read,ci);
			read.read((char *)& cipher,sizeof(cipher));
			
			//decryption
			unsigned char decrypted[64];
			int dec_len = decrypt(cipher,stoi(ci),key,decrypted);
			string a="";
			for(int i=0;i<dec_len;i++){
				a+=(const char)decrypted[i];
			}
			//compare entered password with decrypted password
			if(a==pass){
				cout<<"Logg In Success!"<<endl;
				int ch2;
				cout<<"Welcome back!"<<endl;
				cout<<endl;
				
				//file details
				cout<<"Your Files"<<endl;
				cout<<"Files: "<<endl;
				cout<<endl;
				cout<<"1. Sign Out"<<endl;
				cout<<"2. Back to menu"<<endl;
				cout<<"Your choice: "<<endl;
				cin>>ch2;
				switch(ch2){
					case 1:
						system("exit");
						break;
					case 2:
						main();
						break;
				}
			}else{
				cout<<"FAILED";
			}
			break;
				
				
		}
	
			
	//encrypt
	/*unsigned char* text = (unsigned char*)pass.c_str();
	int text_len = strlen((const char*)text);
	unsigned char cipher[64];
	int cipher_len = encrypt(text,text_len,key,cipher);
	/*for(int i=0;i<cipher_len;i++){
		cout<<cipher[i];
	}*/
	
	//write inside file uername, cipher length, cipher  after encryption 
	/*ofstream file;
	file.open(user+".txt");
	file<<user<<endl<<to_string(cipher_len)<<endl;
	file.write((char *)cipher,sizeof(cipher));
	file.close();*/
	
	
	//read from file uername,cipher length, cipher to decrypt 
	/*string un;
	string ci;
	ifstream read(user+".txt");
	getline(read,un);
	getline(read,ci);
	read.read((char *)& cipher,sizeof(cipher));
	//decrypt
	unsigned char decrypted[64];
	int dec_len = decrypt(cipher,stoi(ci),key,decrypted);
	string a="";
	for(int i=0;i<dec_len;i++){
		a+=(const char)decrypted[i];
	}*/
	
	
	return 0;
}
