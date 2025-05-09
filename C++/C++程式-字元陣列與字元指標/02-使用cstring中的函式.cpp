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
	//strcpy(wordX + 3,"67890");  //這邊的+3表示保留前面3個記憶體位置其他全部覆蓋過去 
	strcpy(wordX + 3,"67890" + 3); //12390
	cout << wordX << endl;
	
	char * wordY = new char[21];
	strcpy(wordY,"Hi, I am Mary");
	char newName[] = "John";
	strcpy(wordY + strlen(wordY) - strlen(newName), newName);
	cout << wordY << endl;
	*/
	
	//void Pointer
	/* void指標變數就是只要是指標不管任何型別就可以指派，只不過只能儲存記憶體位置，而不能
	去控制記憶體位置，也不能去改變那個記憶體，如以下所示：*/
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
    
    /*cout << *pv << endl;這樣寫會有問題，因為他不知道要取得多少byte的記憶體位置裡面的內容
	出來，所以這邊需要明確的型別轉換的動作 
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
	cout <<"temp結果："<<temp << endl;
	cout <<"WordA結果："<< WordA << endl; 
	
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
	從第一個字元開始逐一比對str1與str2的所有字元。
	比對過程若有不一樣的字元時；
	    *若str1的字元大於str2的字元，運算結果為正值。
		*若str1的字元小於str2的字元，運算結果為負值。
	若str1的全部字元等於str2的全部字元，運算的結果為零。 
	*/
	/* 
	char WordA[] = "abcde";
	char WordB[] = "abcde";
	int i = strcmp(WordA,WordB);
	cout << i << endl;
	*/
	
	//const char * strstr(const char * str1, const char * str2);
	/*
	運算出str2在str1中第一次出現的位置。若不存在結果為NULL。 
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
	依照delimiters的內容切割str。delimiters中的各個字元為或的關係。
	 char * tok = strtok(WordA,",");一但寫了這行以後不只有tok，連
	 WordA裡面的內容也將跟著改變。 
	 
	 ※下面的",. "表示的意思是使用","或是". "隔開都可以 
	*/
	char WordA[] = "abc. def,ghi,jkl,mno";
	char * tok = strtok(WordA,",. ");
	/*
	cout << tok << endl;
	cout << WordA << endl; 
	*/
	
	//要繼續印出第二個內容寫法
	/*由於他原先已經把WordA的內容複製到他的運算用空間裡面去了，
	所以在這邊的strtok裡面不能再放WordA(因為WordA已經
	被改變了，所以印出的東西還是abc) ，
	如果想要再繼續往下印第二個def，就得寫NULL，表示繼續沿用原來的內容。	 
	*/ 
	
	/*
	tok = strtok(NULL,",");
	cout << tok << endl;
	cout << WordA << endl;
	*/
	//如果要印出全部內容可以使用迴圈的方式
	while(tok != NULL){
		cout << tok << endl;
		tok = strtok(NULL,",. ");
	}
	cout << "------------------" << endl;
	//如果我不想要改到wordA的值可以的做法
	char wordA[] = "abc,def,ghi,jkl,mno";
	char * pWordA = new char[strlen(wordA)];
	strcpy(pWordA,wordA);
	
	
	char * tok2 = strtok(pWordA,",");
	while(tok2 != NULL){
		cout << tok2 << endl;
		tok2 = strtok(NULL,",");
	}
	 
	cout << wordA << endl;
	
	//文字輸入
	/*
	在c++基本上輸入文字傳統都是使用cin的方式，但是他沒辦法輸入大量文章，
	因為他只會印出空格以前的的文字內容，例如：
	輸入：Hi, I am Leo! 輸出：Hi,
	所以這時必須使用gets()的方式才能夠印出完整的內容，但如果要使用這個方式
	必須 #include <cstdio> 
	補充：gets()是輸入，puts()是輸出。 
	*/ 
	char *wordB = new char[2000];
	gets(wordB);
//	cout << wordB << endl; 
	puts(wordB);
	return 0;
}
