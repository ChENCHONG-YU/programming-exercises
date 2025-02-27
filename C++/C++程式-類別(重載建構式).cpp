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
		Person(string n, int h, int w){  //如果要定義預設值只要加在變數後面(EX：Person(string n, int h, int w = 0)) 
			name = n;
			height = h;
			weight = w;
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
	
	//這行會直接報錯，因為上方函式定義就是要輸入三個值，除非在上面定義一個預設值程式才不會報錯 
//	Person p2("Andy", 180);   

	Person p2("Andy", 180, 80);
	
	p1.output();
	p2.output();
	
	return 0;
}
