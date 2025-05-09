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

	/*const char * str = new char[5];印出的結果會是3，因為這裡面是亂七八糟的值，
	然後他讀到了0就以為字串結束(讀到了給他的記憶體位置的第一個0)，所以這樣運算的
    結果是錯的，但是這樣寫是合法的，通常不應該這麼做。
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
	size_t st = strlen(wordA);    //寫成這樣也可以：int st = strlen(wordA);
	
//	wordA = "123";   // (X) 關於指派的部分只能在宣告的時候指派，不能像這樣指派 
	 
	cout << st << endl;
	
	return 0;
}
