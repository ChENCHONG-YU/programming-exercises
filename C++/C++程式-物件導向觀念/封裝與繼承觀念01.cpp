#include <iostream>
using namespace std;
#include "Circle2.h" 
int main(){
	Circle2 c1;
	int r,h;
	cout << "請輸入圓的半徑(如果輸入的值為負數將一律設定為預設值1)：";
	cin >> r;
	cout << "請輸入圓的高度(如果輸入的值為負數將一律設定為預設值1)：";
	cin >> h;
	c1.setRadius(r);
	c1.setHeight(h);
	cout << "圓的面積為：" << c1.getArea() << endl;
	cout << "圓的周長為：" << c1.getGirth() << endl;
	cout << "圓的體積為：" << c1.getVolume() << endl;
	
	return 0;
}
 
