#include <iostream>
using namespace std;

class Student{
	public:
		//資料(屬性、變數)
		char name[100];
	 	int age;
	 	int blood;
	 	int chineseScore;
	 	int mathScore;
	 	int englishScore;
	 	
	 	//操作(方法、函式)
		 
		void print(){  
			char bloodTable[4][5]=
			{ "A", "B", "O", "AB"};
			cout << "學生" << name << "(" << age << ")：" << endl;
			cout << "血型為" <<  bloodTable[blood] << endl;
			cout << "中文成績：" << chineseScore << "," << endl;
			cout << "數學成績：" << mathScore << "," << endl;
			cout << "英文成績：" << englishScore << endl;
			
		} 
};

int main(){
	Student students[2] ={
		{"Sonic", 30, 1, 80, 50, 95},
		{"Tails", 28, 2, 75, 98, 92}	
	};
	for (int i = 0; i < 2; i++){
		students[i].print();
	}
	
	
	return 0;
}
