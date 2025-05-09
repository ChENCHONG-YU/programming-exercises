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
		/*(newId[0] - 48) ��r���X�ন�Ʀr 
	    �p�GnewId[0]�O'1'�A '1'���r���X�O49�A�A��49�48 �N�|�o��Ʀr 1 
		*/
		/*���������ҳW�ߡG �e���^��r�ন�Ʀr�A�Ĥ@�ӼƦr*1 �̫�@�ӼƦr*1 ��������L�Ʀr *9 *8 *7 *6 *5 *4 *3 *2 *1 
		EX: 
		�����Ҧr���GA123456789
		A -> 10
        ��}	   | 0	1  2  3  4  5  6  7  8  9  10 
		�����Ҧr�� | 1  0  1  2  3  4  5  6  7  8  9
		����       |*1 *9 *8 *7 *6 *5 *4 *3 *2 *1 *1
		*/
		total = (newId[0] - 48) * 1;  //�Ĥ@��*1 
		total += (newId[10] - 48) * 1;//�̫᭱*1
		//�����o�@�s*9 *8 *7 *6 * 5 *4 *3 *2 *1 
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
