#include <iostream>
using namespace std;
#include "Circle.h"

int main(){
	/*
	Circle c1;
	c1.radius = 10;
	Circle & rc1 = c1;
	cout << rc1.getArea() << endl;
	*/
	
	
//	Circle c1,c2;
//	c1.radius = 10;
//	c2.radius = 10;
//	cout << c1.compare(c2) << endl;
//	
//	/*這行是使用指標的方式傳遞，然而在函數的小括胡可以放任何東西，這樣如果要是放NULL是可以編譯成功
//	的但是執行出來的結果會有問題，這就是使用指標的缺點。 
//	*/ 
//	cout << c1.compare2(&c2) << endl;
//	
//	//所以這行使用以參考的方式傳遞，這樣如果我輸入NULL，編譯器就會出現錯誤，不會讓他可以順利執行 
//	cout << c1.compare3(c2) << endl;

//    Circle c1,c2;
//	c1.radius = 20;
//	c1.copy4(c2);
//	cout << c1.compare3(c1.copy4(c2)) << endl; 

    //使用指標取值當作參考也可以
//	Circle * pc1 = new Circle();
//	Circle & rc1 = *pc1;
//	Circle c1;
//	c1.radius = 10;
//	pc1 -> radius = 10;
//	cout << c1.compare3(*pc1) << endl; 

//    Circle * pc1 = new Circle();
//    pc1 -> radius = 10; 
//    Circle *& rpc1 = pc1;  //等號後面一定要放的是已存在的指標名稱，不能放 new Circle() or &c 
//    rpc1 -> radius = 100;
//    cout << pc1 -> getArea() << endl;

//    Circle c1;
//	c1.radius = 10;
//	Circle * pc1 = new Circle();
//	pc1 -> radius = 20;
////	pc1 = NULL;  //如果加了這行一樣也是編譯可過但是執行會有問題，所以可以在標頭檔那邊寫防呆機制 
//	cout << c1.compare4(pc1) << endl;

    Circle c1;
    Circle * pc1 = new Circle();
    c1.radius = 10;
    cout << c1.compare4(c1.copy5(pc1)) << endl;
	
	return 0;
}
