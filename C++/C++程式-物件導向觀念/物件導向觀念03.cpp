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
//	/*�o��O�ϥΫ��Ъ��覡�ǻ��A�M�Ӧb��ƪ��p�A�J�i�H�����F��A�o�˦p�G�n�O��NULL�O�i�H�sĶ���\
//	�����O����X�Ӫ����G�|�����D�A�o�N�O�ϥΫ��Ъ����I�C 
//	*/ 
//	cout << c1.compare2(&c2) << endl;
//	
//	//�ҥH�o��ϥΥH�ѦҪ��覡�ǻ��A�o�˦p�G�ڿ�JNULL�A�sĶ���N�|�X�{���~�A���|���L�i�H���Q���� 
//	cout << c1.compare3(c2) << endl;

//    Circle c1,c2;
//	c1.radius = 20;
//	c1.copy4(c2);
//	cout << c1.compare3(c1.copy4(c2)) << endl; 

    //�ϥΫ��Ш��ȷ�@�ѦҤ]�i�H
//	Circle * pc1 = new Circle();
//	Circle & rc1 = *pc1;
//	Circle c1;
//	c1.radius = 10;
//	pc1 -> radius = 10;
//	cout << c1.compare3(*pc1) << endl; 

//    Circle * pc1 = new Circle();
//    pc1 -> radius = 10; 
//    Circle *& rpc1 = pc1;  //�����᭱�@�w�n�񪺬O�w�s�b�����ЦW�١A����� new Circle() or &c 
//    rpc1 -> radius = 100;
//    cout << pc1 -> getArea() << endl;

//    Circle c1;
//	c1.radius = 10;
//	Circle * pc1 = new Circle();
//	pc1 -> radius = 20;
////	pc1 = NULL;  //�p�G�[�F�o��@�ˤ]�O�sĶ�i�L���O����|�����D�A�ҥH�i�H�b���Y�ɨ���g���b���� 
//	cout << c1.compare4(pc1) << endl;

    Circle c1;
    Circle * pc1 = new Circle();
    c1.radius = 10;
    cout << c1.compare4(c1.copy5(pc1)) << endl;
	
	return 0;
}
