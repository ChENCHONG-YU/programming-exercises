#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string _name;
		string _blood;
		string _star;
	public:
		/*
		   void Input()在前面加上virtual， 這樣在使用 Person 類別的指標時，
		   存取 Input() 和 Output() 函式的時候，C++ 就會知道要去找對應繼承類別的
		    Input() 和 Output()～
		*/
		virtual void Input(){
			cout << "請輸入姓名：";
			cin >> _name;
			cout << "請輸入血型：";
			cin >> _blood;
			cout << "請輸入星座：";
			cin >> _star;
		}
		
		virtual void Output(){
			cout << "姓名：" << _name << endl; 
			cout << "血型：" << _blood << endl; 
			cout << "星座：" << _star << endl; 
		}
		
};
//Student繼承 Person
class Student : public Person{
	private:
		string _studentId;
	public:
		void Input(){
			Person::Input();   //繼承下來的那個人(Person)的Input
			cout << "請輸入學號：";
			cin >> _studentId;
		}
		
		void Output(){
			Person::Output();   //繼承下來的那個人(Person)的Output
			cout << "學號：" << _studentId << endl; 
		}
		
		
		 
	
	
};
//Teacher繼承 Person
class Teacher : public Person{
	private:
		
		string _title;
	public:
		void Input(){
			Person::Input();   //繼承下來的那個人(Person)的Input
			cout << "請輸入職稱：";
			cin >> _title;
		}
		
		void Output(){
			Person::Output();  //繼承下來的那個人(Person)的Output
			cout << "職稱：" << _title << endl; 
		}
};


int main(){
	int peopleAmount = 3;
	 Person* People[peopleAmount] = {
	 	new Person(),
	 	new Student(),
	 	new Teacher()
	 };
	 
	 for(int i = 0; i < peopleAmount; i++){
	 	cout << "請輸入第" << (i+1) << "個人的資料：" << endl; 
		(*People[i]).Input(); //因為Person是一個存記憶體位置的指標，所以這邊必須使用取值符號取得他的值才能夠Input 
		cout << "輸入完畢!" << endl; 
	 }
	  for(int i = 0; i < peopleAmount; i++){
	 	cout << "輸出第" << (i+1) << "個人的資料：" << endl; 
		(*People[i]).Output(); //因為Person是一個存記憶體位置的指標，所以這邊必須使用取值符號取得他的值才能夠Output
		cout << "輸入完畢!" << endl; 
	 }
	 //因為前面有new新的記憶體配置，所以這邊需要做delete釋放記憶體空間 
	 for(int i = 0; i < peopleAmount; i++){
	 	delete People[i]; 
	 }
	 
	 
	
	return 0;
}
