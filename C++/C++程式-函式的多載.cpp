#include <iostream>
//using std::cout; //只有cout要套用std的東西，這種寫法可以達成保護的作用
using namespace std; //把需要用到std的物件一次設定上去 


float sum (float a, float b){
	cout << "浮點數版本" << endl;  //輸出結果 
	return a + b;
}

int sum (int a, int b){
	cout << "整數版本" << endl;   //輸出結果 
	return a + b;
}

int main(){
    float a, b;
//    int a, b;
	cin >> a >> b; //輸入參數 
	cout << "Sum: " << sum(a,b)<< endl;   //輸出結果 
	return 0;
}
