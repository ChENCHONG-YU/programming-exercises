#include <iostream>
using namespace std;
#include "MyHeader.h" 

int main()
{
//	 
//	struct Circle CircleA;
//	/*
//	//CircleA.radius = 10;
//	setRadius(&CircleA, -1);
//	CircleA.height = 20;
//	CircleA.girth = getGirth(CircleA);
//	CircleA.area = getArea(CircleA);
//	CircleA.volume = getVolume(CircleA);
//	*/
//	
//	setAllValue(&CircleA, 10, 20);
//	cout << CircleA.girth << endl;
//	cout << CircleA.area << endl;
//	cout << CircleA.volume << endl; 
//	
//	//使用指標當參數呼叫 setAllValue函數
//	struct Circle * pointerA = new struct Circle;
//	setAllValue(pointerA, 100, 200);
//	cout << pointerA -> girth << endl;
//	cout << pointerA -> area << endl;
//	cout << pointerA -> volume << endl;
//	
//	struct Circle * pointerB = 0;
//	setAllValue(pointerB, 10, 20);
//	/*由於這裡把空值設定給pointerB所以會無法正常顯示出，因為執行到這裡程式就中斷掉了， 
//	如果這邊沒有加這個if判斷式去判斷會直接連下面的 cout << "The end." << endl;
//	都無法正常顯示出來。 
//	*/
//	if(pointerB != NULL){
//		cout << pointerB -> girth << endl;
//		cout << pointerB -> area << endl;
//		cout << pointerB -> volume << endl;
//	}
//	cout << "The end." << endl;

	//比大小 
    struct Circle CircleA;
	struct Circle CircleB;
	setAllValue(&CircleA, 10, 20);
	setAllValue(&CircleB, 10, 20);
	cout << compareCircle(CircleA,CircleB) << endl;
	//比大小(以指標的形式)
//	cout << compareCircle(&CircleA,&CircleB) << endl;
	
	//使用指標呼叫參考函式
	struct Circle * p1 = new struct Circle;
	struct Circle * p2 = new struct Circle;
	setAllValue(p1, 10, 20);
	setAllValue(p2, 10, 20);
	cout << compareCircle(*p1,*p2) << endl;
	
	//使用函式複製圓的資料1 
	struct Circle c1;
	setAllValue(&c1, 10, 20);
	struct Circle c2 = copyCircle(c1);
	cout << getArea(c1) << endl;
	cout << getArea(c2) << endl;
	
	//使用函式複製圓的資料2(以兩個指標當參數)
	struct Circle *c3 = new struct Circle;
	copyCircle(&c1,c3);
//	cout << compareCircle(c1,*copyCircle(&c1,c3)) << endl;
	cout << getArea(*c3) << endl;  
	
	//使用函式複製圓的資料3(使用參考)
	setRadius(&c1,100);
//	copyCircle(c1,c2);
	cout << compareCircle(c1,copyCircle(c1,c2)) << endl;
	cout << getArea(c2) << endl;

    
    return 0;
}
