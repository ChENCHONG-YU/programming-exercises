#include <iostream>
using namespace std;

class Square{
	private:
		int len;	
	public:
		Square(){   //建構式初始值設定 
			len = 5;
		}
		~Square(){ //解構賦值練習 
			cout << "面積計算結果如上，程式結束!!!" << endl; 
		} 
		void setLen(int n){
			if(n <= 0){
				cout << "邊長為負數或0很奇怪......" << endl; 
				len = 0;
				return;
			}
			len = n;
		}
		int getLen(){
			return len;
		}
		int area(){
			return len * len;
		};		
};

int main(){
	Square a;
	a.setLen(10);
	cout << "邊長為" << a.getLen() << "的正方形面積為：" << a.area() << endl;
	a.setLen(20);
	cout << "邊長為" << a.getLen() << "的正方形面積為：" << a.area() << endl; 
	
	
	return 0;
}
