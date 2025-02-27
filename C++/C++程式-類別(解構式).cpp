#include <iostream>
#include <string>

using namespace std;

class Person{
	public:
		Person()
		{
			name = "No name";
			height = 0;
			weight = 0;
		};
		
		/*在main方法中只要執行到return 0代表程式結束，程式結束時回收main方法中定義的p1，
		那在回收p1的同時就會呼叫這段解構函式
		解構函式寫法就是在函式名稱的前面加上一個 "~"符號 
		*/
		~Person(){
			cout << "BeyBey" << endl;   //物件結束時印出BeyBey
		};
		
		void input(){
			cin >> name;
			cin >> height;
			cin >> weight;
		};
		void output(){
			cout << "Name：" << name << endl;
			cout << "Height：" << height << "cm" << endl;
			cout << "Weight：" << weight << "km" << endl;
		};
		private:
			string name;
			int height;
			int weight;
};

int main(){
	Person p1;
	p1.output();
	
	return 0;
}
