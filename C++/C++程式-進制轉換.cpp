#include <iostream>
//using std::cout; //只有cout要套用std的東西，這種寫法可以達成保護的作用
using namespace std; //把需要用到std的物件一次設定上去 

int main(){
	int a;
	cout <<"十進制數字:";
	cin >> a ;
	cout << "八進制數字:"<< oct << a << endl;   //八進制
	cout << "十六進制數字:"<< hex << a << endl;   //十六進制
	cout << showbase << hex <<uppercase << a << endl;  //showbase顯示進位制 uppercase表示把 0x的x變成大寫X
	cout << "轉回十進制數字:"<< dec << a << endl; //轉回十進制
	return 0;
}
