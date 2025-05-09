#include <iostream>
#include "myheader2.h"
using namespace std;

int main(){
	Circle c(10);
//	Circle c;
//	Rectangle r(10,10);
    /*硂琿ㄢ把计狦硂柑Τ糶硂柑穦р斑把计
	倒材把计跑计 
	*/
	Rectangle r(10);
//	Rectangle r;
	cout << c.getRadius() << endl;
	cout << r.getLength() << endl;
	cout << r.getWidth() << endl;
	return 0;
}
