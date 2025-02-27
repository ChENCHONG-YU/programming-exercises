#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10;
	int b = 5;
	cout << "ユ传玡a = " << a << endl;
	cout << "ユ传玡b = " << b << endl;
	swap(a,b);
	cout << "竒筁ユ传a = " << a << endl;
	cout << "竒筁ユ传b = " << b << endl; 
	 
	return 0;
}
