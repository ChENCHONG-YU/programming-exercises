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
//	//�ϥΫ��з�ѼƩI�s setAllValue���
//	struct Circle * pointerA = new struct Circle;
//	setAllValue(pointerA, 100, 200);
//	cout << pointerA -> girth << endl;
//	cout << pointerA -> area << endl;
//	cout << pointerA -> volume << endl;
//	
//	struct Circle * pointerB = 0;
//	setAllValue(pointerB, 10, 20);
//	/*�ѩ�o�̧�ŭȳ]�w��pointerB�ҥH�|�L�k���`��ܥX�A�]�������o�̵{���N���_���F�A 
//	�p�G�o��S���[�o��if�P�_���h�P�_�|�����s�U���� cout << "The end." << endl;
//	���L�k���`��ܥX�ӡC 
//	*/
//	if(pointerB != NULL){
//		cout << pointerB -> girth << endl;
//		cout << pointerB -> area << endl;
//		cout << pointerB -> volume << endl;
//	}
//	cout << "The end." << endl;

	//��j�p 
    struct Circle CircleA;
	struct Circle CircleB;
	setAllValue(&CircleA, 10, 20);
	setAllValue(&CircleB, 10, 20);
	cout << compareCircle(CircleA,CircleB) << endl;
	//��j�p(�H���Ъ��Φ�)
//	cout << compareCircle(&CircleA,&CircleB) << endl;
	
	//�ϥΫ��ЩI�s�ѦҨ禡
	struct Circle * p1 = new struct Circle;
	struct Circle * p2 = new struct Circle;
	setAllValue(p1, 10, 20);
	setAllValue(p2, 10, 20);
	cout << compareCircle(*p1,*p2) << endl;
	
	//�ϥΨ禡�ƻs�ꪺ���1 
	struct Circle c1;
	setAllValue(&c1, 10, 20);
	struct Circle c2 = copyCircle(c1);
	cout << getArea(c1) << endl;
	cout << getArea(c2) << endl;
	
	//�ϥΨ禡�ƻs�ꪺ���2(�H��ӫ��з�Ѽ�)
	struct Circle *c3 = new struct Circle;
	copyCircle(&c1,c3);
//	cout << compareCircle(c1,*copyCircle(&c1,c3)) << endl;
	cout << getArea(*c3) << endl;  
	
	//�ϥΨ禡�ƻs�ꪺ���3(�ϥΰѦ�)
	setRadius(&c1,100);
//	copyCircle(c1,c2);
	cout << compareCircle(c1,copyCircle(c1,c2)) << endl;
	cout << getArea(c2) << endl;

    
    return 0;
}
