#include <iostream>
#include "myheader2.h"
using namespace std;

int main(){
	Circle c(10);
//	Circle c;
//	Rectangle r(10,10);
    /*�]���o�q����ӰѼơA�p�G�o�̥u���g�@�ӳo�̷|��ߤ@�Ӫ��Ѽ�
	�������Ĥ@�ӰѼƪ��ܼ� 
	*/
	Rectangle r(10);
//	Rectangle r;
	cout << c.getRadius() << endl;
	cout << r.getLength() << endl;
	cout << r.getWidth() << endl;
	return 0;
}
