#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string _name;
		string _blood;
		string _star;
	public:
		void Input(){
			cout << "請輸入姓名：";
			cin >> _name;
			cout << "請輸入血型：";
			cin >> _blood;
			cout << "請輸入星座：";
			cin >> _star;
		}
		
		void Output(){
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
	Person sonic;
	Student tails;
	Teacher amy;
	
	sonic.Input();
	tails.Input();
	amy.Input();
	
	sonic.Output();
	tails.Output();
	amy.Output();
	
	return 0;
}
