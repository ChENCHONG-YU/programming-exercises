#include <iostream>
//using std::cout; //只有cout要套用std的東西，這種寫法可以達成保護的作用
using namespace std; //把需要用到std的物件一次設定上去 

int add(int a, int b){
	return a + b;
}

int subtract(int a, int b){
	return a - b;
}
int multiple(int a, int b){
	return a * b;
}
int divide(int a, int b){
	return a / b;
}

int main(){
	int a = 1;
	int b = 3;
	
	int select;
	cout << "1與3的運算(加法請輸入1、減法請輸入2、乘法請輸入3、除法請輸入4)："; 
	cin >> select; 
	
	int (*calculate)(int a, int b) = add;   //函式指標
	switch(select){
		case 1:
			calculate = add;
			cout << a << " + " << b << " = " <<calculate(a,b) << endl;
			break;
		case 2:
			calculate = subtract;
			cout << a << " - " << b << " = " <<calculate(a,b) << endl;
			break;
		case 3:
			calculate = multiple;
			cout << a << " * " << b << " = " <<calculate(a,b) << endl;
			break;
		case 4:
			calculate = divide;
			cout << a << " / " << b << " = " <<calculate(a,b) << endl;
			break;
		default:
			calculate = add;
			cout << a << " + " << b << " = " <<calculate(a,b) << endl;
			break;
	}	
	
	
	
	return 0;
}
