#include <iostream>
//using std::cout; //只有cout要套用std的東西，這種寫法可以達成保護的作用
using namespace std; //把需要用到std的物件一次設定上去 
 
int main(){
    float a, b;
	cin >> a >> b; 
	cout << "Sum: " << a + b << endl; 
	return 0;
}
