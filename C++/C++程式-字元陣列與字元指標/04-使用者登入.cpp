#include <iostream>
#include <cstring>
#include <cstdio> 
using namespace std;


int main(){
	int i;
	for(i = 3; i >= 1; i--){
		char * name = new char[10];
		char * password = new char[10];
		cout << "UserName：";
		cin >> name;
		cout << "Password：";
		cin >> password;
		
		int result = 0;
		
		//strcmp(要比對的字元 , 比對的字元)，如果兩個都相等會等於0 
		if(strcmp(name,"Leo") == 0 && strcmp(password,"123456789") == 0){
			result = 0;
		}else if(strcmp(name,"Leo") == 0 && strcmp(password,"123456789") != 0){
			result = 1;
		}else{
			result = 2;
		}
		
		if(result==0){
			cout << "Welcome " << name << "!" << endl;
			break; 
		}else if(result == 1){
			cout << "Password is Wrong (可嘗試機會：" << i-1 << ")" << endl;
		}else{
			cout << "UserName is Wrong (可嘗試機會：" << i-1 << ")" << endl;
		}	
	}
	if(i == 0){
		cout << "錯誤已達3次，程式結束!!!" << endl; 
	}
	
	
	
	return 0;
} 
