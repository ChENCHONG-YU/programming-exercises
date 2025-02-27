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
int mod(int a, int b){
	return a % b;
}

int main(){
	int a = 1;
	int b = 3;
	
	int (*calculate[5])(int a, int b)=
	 { add, subtract, multiple, divide, mod};
	 
	for(int i = 0 ; i < 5; i++){
		cout << "result:" << calculate[i](a, b) << endl;
	}
		
	return 0;
}
