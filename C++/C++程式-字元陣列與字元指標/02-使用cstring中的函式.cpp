#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	//char * strcpy(char * destination, const char * source);
	/*
	char * dest1 = "12345";
	char * dest2 = new char[11];
	char temp[11];
	char * dest3 = temp;
	char * dest4 = dest2;
		
    const char * sou1 = "12345";
	const char * sou2 = new char[11];
	char temp2[11];
	const char * sou3 = temp2;
	const char * sou4 = sou2; 
	*/
	
	/* 
	char wordA[11];
	strcpy(wordA, "12345");
	cout << wordA << endl;
	
	char * wordB = new char[11];
	strcpy(wordB, "12345");
	cout << wordB << endl;
	
	strcpy(wordA, "1234567890");
	strcpy(wordB, "1234567890");
	cout << wordA << endl;
	cout << wordB << endl;
	
//	strcpy(wordA, "1234567890123");
	wordB = new char[15];
	strcpy(wordB, "1234567890123");
//	cout << wordA << endl;
	cout << wordB << endl;
	
	char * wordC = new char[20];
	cout << strlen(strcpy(wordC,wordB)) << endl;
	
	cout << "--------------------------" << endl;
	
	char * wordX = new char[21];
	strcpy(wordX, "12345");
	//strcpy(wordX + 3,"67890");  //�o�䪺+3��ܫO�d�e��3�ӰO�����m��L�����л\�L�h 
	strcpy(wordX + 3,"67890" + 3); //12390
	cout << wordX << endl;
	
	char * wordY = new char[21];
	strcpy(wordY,"Hi, I am Mary");
	char newName[] = "John";
	strcpy(wordY + strlen(wordY) - strlen(newName), newName);
	cout << wordY << endl;
	*/
	
	//void Pointer
	/* void�����ܼƴN�O�u�n�O���Ф��ޥ��󫬧O�N�i�H�����A�u���L�u���x�s�O�����m�A�Ӥ���
	�h����O�����m�A�]����h���ܨ��ӰO����A�p�H�U�ҥܡG*/
	/*
	void * pv;
    int a = 97;
    pv = &a;
    cout << pv << endl;
    
    cout << *(int *) pv << endl;
    
    char b = 'a';
    pv = &b;
    cout << pv << endl;
    */
    /* (X)
    *pv = 'b';
    cout << b << endl;
    */
    
    /*cout << *pv << endl;�o�˼g�|�����D�A�]���L�����D�n���o�h��byte���O�����m�̭������e
	�X�ӡA�ҥH�o��ݭn���T�����O�ഫ���ʧ@ 
	*/
	/*
    cout << *(char *)pv << endl;
    
    int * pz = new int;
    *pz = 123;
    pv = pz;
    cout << *(int *) pv << endl;
    */
    
	//void * memcpy( void * destination, const void * source,size_t num);
	/*
	char WordA[] = "123456789";
	char WordB[] = "abcde";
//	strcpy(WordA,WordB);
//	memcpy(WordA + 3,WordB + 2,3);
//	cout << *(char *)memcpy(WordA + 3,WordB + 2,3) << endl; //c
	char * temp = (char *)memcpy(WordA + 3,WordB + 2,3);
//    char * temp = (char *)strcpy(WordA + 3,WordB + 2); //cde
	cout <<"temp���G�G"<<temp << endl;
	cout <<"WordA���G�G"<< WordA << endl; 
	
	memcpy(WordA + 3,WordA + 6,3);
	cout << WordA << endl;
	
	int z = 97;
	memcpy(WordA,&z,1);
	cout << WordA << endl;
	memcpy(&z, WordA + 1, 1);
	cout << z << endl;
	*/
	//int strcmp( const char * str1, const char * str2);
	/*
	�q�Ĥ@�Ӧr���}�l�v�@���str1�Pstr2���Ҧ��r���C
	���L�{�Y�����@�˪��r���ɡF
	    *�Ystr1���r���j��str2���r���A�B�⵲�G�����ȡC
		*�Ystr1���r���p��str2���r���A�B�⵲�G���t�ȡC
	�Ystr1�������r������str2�������r���A�B�⪺���G���s�C 
	*/
	/* 
	char WordA[] = "abcde";
	char WordB[] = "abcde";
	int i = strcmp(WordA,WordB);
	cout << i << endl;
	*/
	
	//const char * strstr(const char * str1, const char * str2);
	/*
	�B��Xstr2�bstr1���Ĥ@���X�{����m�C�Y���s�b���G��NULL�C 
	*/ 
	/*
	char WordA[] = "123456789";
	char * pc = strstr(WordA,"456");
	cout << pc << endl;

//	strcpy(pc,"999999");
//	cout << WordA << endl;
	
	cout << strcmp(strstr(WordA,"456"),"456789");
	*/
	
	//char * strtok(char * str,const char * delimiters);
	/*
	�̷�delimiters�����e����str�Cdelimiters�����U�Ӧr�����Ϊ����Y�C
	 char * tok = strtok(WordA,",");�@���g�F�o��H�ᤣ�u��tok�A�s
	 WordA�̭������e�]�N��ۧ��ܡC 
	 
	 ���U����",. "��ܪ��N��O�ϥ�","�άO". "�j�}���i�H 
	*/
	char WordA[] = "abc. def,ghi,jkl,mno";
	char * tok = strtok(WordA,",. ");
	/*
	cout << tok << endl;
	cout << WordA << endl; 
	*/
	
	//�n�~��L�X�ĤG�Ӥ��e�g�k
	/*�ѩ�L����w�g��WordA�����e�ƻs��L���B��ΪŶ��̭��h�F�A
	�ҥH�b�o�䪺strtok�̭�����A��WordA(�]��WordA�w�g
	�Q���ܤF�A�ҥH�L�X���F���٬Oabc) �A
	�p�G�Q�n�A�~�򩹤U�L�ĤG��def�A�N�o�gNULL�A����~��u�έ�Ӫ����e�C	 
	*/ 
	
	/*
	tok = strtok(NULL,",");
	cout << tok << endl;
	cout << WordA << endl;
	*/
	//�p�G�n�L�X�������e�i�H�ϥΰj�骺�覡
	while(tok != NULL){
		cout << tok << endl;
		tok = strtok(NULL,",. ");
	}
	cout << "------------------" << endl;
	//�p�G�ڤ��Q�n���wordA���ȥi�H�����k
	char wordA[] = "abc,def,ghi,jkl,mno";
	char * pWordA = new char[strlen(wordA)];
	strcpy(pWordA,wordA);
	
	
	char * tok2 = strtok(pWordA,",");
	while(tok2 != NULL){
		cout << tok2 << endl;
		tok2 = strtok(NULL,",");
	}
	 
	cout << wordA << endl;
	
	//��r��J
	/*
	�bc++�򥻤W��J��r�ǲγ��O�ϥ�cin���覡�A���O�L�S��k��J�j�q�峹�A
	�]���L�u�|�L�X�Ů�H�e������r���e�A�Ҧp�G
	��J�GHi, I am Leo! ��X�GHi,
	�ҥH�o�ɥ����ϥ�gets()���覡�~����L�X���㪺���e�A���p�G�n�ϥγo�Ӥ覡
	���� #include <cstdio> 
	�ɥR�Ggets()�O��J�Aputs()�O��X�C 
	*/ 
	char *wordB = new char[2000];
	gets(wordB);
//	cout << wordB << endl; 
	puts(wordB);
	return 0;
}
