#include <iostream>
#include <cstring>
using namespace std;

int main(){
	/*	
	char wordA[11];
	char wordB[11] = {'1','2','3'};
	char wordC[11] = "12345";
	char wordD[] = "12345";	
	cout << wordA << endl;
	cout << wordB << endl;
	cout << wordC << endl;
	cout << wordD << endl;
	*/
	/*
	char * wordA;
	char * wordB = "12345";
	char * wordC = new char[11];
	
	cout << wordA << endl;
	cout << wordB << endl;
	cout << wordC << endl; 
	
	cout << wordA << endl;
	*/
	
	// size_t strlen(const char * str)
//	const char * str = "12345";

	/*const char * str = new char[5];�L�X�����G�|�O3�A�]���o�̭��O�äC�K�V���ȡA
	�M��LŪ��F0�N�H���r�굲��(Ū��F���L���O�����m���Ĥ@��0)�A�ҥH�o�˹B�⪺
    ���G�O�����A���O�o�˼g�O�X�k���A�q�`�����ӳo�򰵡C
	*/
//	const char * str = new char[5];
	/*
	char wordA[11];
	const char * str = wordA;
	*/
	/*
	char wordA[11] = "12345";
	const char * str = wordA;
	*/	
//	cout << strlen(str) << endl;
    /*
	char wordA[] = "12345";
	cout << strlen(wordA) << endl;
	*/
	
	char wordA[] = "12345";
	size_t st = strlen(wordA);    //�g���o�ˤ]�i�H�Gint st = strlen(wordA);
	
//	wordA = "123";   // (X) ��������������u��b�ŧi���ɭԫ����A���๳�o�˫��� 
	 
	cout << st << endl;
	
	return 0;
}
