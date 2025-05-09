#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	char * id = new char[11];
	cin >> id;
	
	int result = 1;
	
	if(strlen(id) != 10){
		result = 0;
	}else if(id[0] < 'A' || id[0] >'Z'){
		result = 0;
	}else if(id[1] != '1' && id[1] != '2'){
		result = 0;
	}else{
		for(int i = 2; i < strlen(id); i++){
			if(id[i] < '0' || id[i] > '9'){
				result = 0;
				break;
			}
		}
	}
	
	if(result){
		char words[] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
		int index = 0;
		for(size_t i = 0; i < strlen(words); i++){
			if(id[0] == words[i]){
				index = i;
				break;
			}
		}
		index += 10;
		
		char temp[3];
		sprintf(temp,"%d",index);
		
		char * newId = new char[12];
		strcpy(newId,temp);
		strcat(newId,id+1);
		
		int total = 0;
		/*(newId[0] - 48) 把字元碼轉成數字 
	    如果newId[0]是'1'， '1'的字元碼是49，再拿49減掉48 就會得到數字 1 
		*/
		/*身分證驗證規律： 前面英文字轉成數字，第一個數字*1 最後一個數字*1 中間的其他數字 *9 *8 *7 *6 *5 *4 *3 *2 *1 
		EX: 
		身分證字號：A123456789
		A -> 10
        位址	   | 0	1  2  3  4  5  6  7  8  9  10 
		身分證字號 | 1  0  1  2  3  4  5  6  7  8  9
		乘數       |*1 *9 *8 *7 *6 *5 *4 *3 *2 *1 *1
		*/
		total = (newId[0] - 48) * 1;  //第一個*1 
		total += (newId[10] - 48) * 1;//最後面*1
		//中間這一群*9 *8 *7 *6 * 5 *4 *3 *2 *1 
		for(int i = 1; i <= 9; i++){
			total += (newId[i] - 48) * (10-i);
		}
		
		if(total % 10 != 0){
			result = 0;
		}
		
//		cout << total << " OK" << endl;
	}
	
	if(result){
		cout << "Correct" << endl; 
	}else{
		cout << "Wrong" << endl;
	}
	return 0;
}
