#include <iostream>
using namespace std;
#include "Circle2.h" 
int main(){
	Circle2 c1;
	int r,h;
	cout << "�п�J�ꪺ�b�|(�p�G��J���Ȭ��t�ƱN�@�߳]�w���w�]��1)�G";
	cin >> r;
	cout << "�п�J�ꪺ����(�p�G��J���Ȭ��t�ƱN�@�߳]�w���w�]��1)�G";
	cin >> h;
	c1.setRadius(r);
	c1.setHeight(h);
	cout << "�ꪺ���n���G" << c1.getArea() << endl;
	cout << "�ꪺ�P�����G" << c1.getGirth() << endl;
	cout << "�ꪺ��n���G" << c1.getVolume() << endl;
	
	return 0;
}
 
