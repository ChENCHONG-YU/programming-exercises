#include <iostream>
using namespace std;
#include "Circle.h"

int main(){
	/*
	Circle * pc1;
	
	Circle * pc2 = new Circle;
	
	pc1 = new Circle();
	
	cout << pc1 << endl;
	cout << pc2 << endl;
	
	cout << "--------------------------------" <<endl;
	*/
	
	/*由於下面pc1已經把記憶體位址指派給pc2，然而本來的pc2的記憶體位址已經沒有用處，從這個
	專案裡面也找不到這個記憶體空間，但依然還持續佔用著記憶體空間，造成不必要的空間浪費，所
	以這邊要先把pc2的記憶體空間給釋放掉 
	*/ 
	/*
	delete pc2;
	
	//這邊會把pc1的記憶體位址指派給pc2，所以這邊兩個都是存同樣的記憶體位址
	pc2 = pc1;
	cout << pc1 << endl;
	cout << pc2 << endl;
	
	cout << "--------------------------------" <<endl;
	
	Circle c;
	Circle * pc3 = &c;
	cout << &c << endl; 
	cout << pc3 << endl;
	
	cout << "--------------------------------" <<endl;
	*/
	/*
	Circle * pc1 = new Circle();
	pc1 -> radius = 10;
	cout << pc1 -> getGirth() << endl;
	cout << pc1 -> getArea() << endl;
	
	Circle c;
	c.radius = 10;
	
	int i = pc1 -> compare2(&c);
	cout << i << endl;
	
	Circle * pc2 = new Circle();
	pc2 -> radius = 30;
	int i2 = pc1 -> compare2(pc2);
	cout << i2 << endl;
	int i3 = pc1 -> compare2(new Circle());
	cout << i3 << endl;
	*/
	Circle * pc1 = new Circle();
	pc1 -> radius = 10;
	
	Circle c;
	c.radius = 123;
	pc1 -> copy2(&c);
	cout << c.radius << endl;
	
	Circle * pc2 = new Circle();
	pc1 -> copy3(pc2);
	cout << pc2 -> radius << endl;
	
	Circle * pc3 = new Circle();
	int i = pc1 -> compare2(pc1 -> copy3(pc3));
	cout << i << endl;
	
	delete pc1;
	delete pc2;
	delete pc3;
	
	return 0;
}

