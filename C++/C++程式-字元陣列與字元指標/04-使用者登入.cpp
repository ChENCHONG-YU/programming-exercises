#include <iostream>
#include <cstring>
#include <cstdio> 
using namespace std;


int main(){
	int i;
	for(i = 3; i >= 1; i--){
		char * name = new char[10];
		char * password = new char[10];
		cout << "UserName�G";
		cin >> name;
		cout << "Password�G";
		cin >> password;
		
		int result = 0;
		
		//strcmp(�n��諸�r�� , ��諸�r��)�A�p�G��ӳ��۵��|����0 
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
			cout << "Password is Wrong (�i���վ��|�G" << i-1 << ")" << endl;
		}else{
			cout << "UserName is Wrong (�i���վ��|�G" << i-1 << ")" << endl;
		}	
	}
	if(i == 0){
		cout << "���~�w�F3���A�{������!!!" << endl; 
	}
	
	
	
	return 0;
} 
