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
	cout << "交換前的a = " << a << endl;
	cout << "交換前的b = " << b << endl;
	swap(a,b);
	cout << "經過交換後的a = " << a << endl;
	cout << "經過交換後的b = " << b << endl; 
	 
	return 0;
}
