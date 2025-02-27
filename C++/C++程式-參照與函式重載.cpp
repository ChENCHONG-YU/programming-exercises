#include <iostream>
using namespace std;
void f(int &b){
	b = 3;
} 
int main(){
	int a = 5;
	//int &b = a;  //給a變數取一個別名為b，意思是說這個變數b是參照於a(這裡的&與指標的&完全不一樣) 
	f(a);         //相當於int &b = a; 
	
	cout << "a = " << a << endl;
	return 0;
}
