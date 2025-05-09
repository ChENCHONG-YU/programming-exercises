#include <iostream>
#include <string>

using namespace std;

int main(){
	/*
	string s1 = "Hello World!";
	string * ps1 = new string("I love C++");
	
	char c = s1.at(0);
	cout << c << endl;
    char c2 = ps1->at(0);
    cout << c2 << endl;
    cout << s1[0] << endl;
    cout << (*ps1)[0] << endl;
	
	size_t size = s1.size();
	size_t size2 = ps1->size();
	cout << size << endl;
	cout << size2 << endl;
	
	for(size_t i = 0; i < s1.size(); i++){
		cout << s1[i];
	} 
	cout << endl;
	//assign()函式相當於 "=" 指派新內容給物件，物件中的舊內容會被取代。 
	s1.assign("New String Content");
	ps1->assign("New String Content");  // *ps1 = "New String Content";
	cout << s1 << endl;
	cout << *ps1 << endl;
	
	//append 串接，將str串接到物件目前內容的最後面。
	s1.append(" C++");
	ps1->append(" Java");  // *ps1 += "Java";
	cout << s1 << endl;
	cout << *ps1 << endl;
	*/
	
	/*
	string s1 = "1245";
	
	//append + insert   insert(pos,想要放入的字串內容)
//	s1.insert(2,"3");   //12345 
	s1.append(s1.insert(2,"3"));  //1234512345 
	cout << s1 << endl;
	
	//erase   erase(size_t pos = 0,size_t len = npos); 

	//s1.erase();
	//cout << "s1:" << s1 << endl;   // s1: (s1裡面的東西都被清空了，所以不會印出任何東西)


	//s1.erase(5);
	//cout << "s1：" << s1 << endl; // s1:12345(從第5個位置開始清空，也就是原本的1234512345的第二個1開始) 

	s1.erase(5,3);  //從第5個位置開始清空，後面為長度3，代表我要清空的長度為3
	cout << "s1：" << s1 << endl; //s1：1234545 
	
	//replace 取代(本函式沒有預設值)     replace(從第幾個位置開始 size_t pos,長度 size_t len,要取代的內容);
	s1.replace(5,2,"67");
    cout << "s1：" << s1 << endl;  //s1：1234567 
    
    //find 搜尋 
	size_t st = s1.find("34");
	cout << st << endl;
	
	st = s1.find("88");
	cout << st << endl;
	if(st == string::npos){
		cout << "Not Found." << endl;
	}
	*/
	/* 
	string s1 = "I love Java. Java is good. Java is very Good.";
    string findWord = "Java";
    string replaceWord = "C++";
    size_t startpos = 0;
    do{
        size_t st = s1.find(findWord,startpos);
        if(st == string::npos){
            break;
        }
        s1.replace(st,findWord.size(),replaceWord);
        startpos = st + replaceWord.size();  //找到的位置加上放進去的新值有幾個值並且從該位置開始 
    }while(true);
    
    cout << s1 << endl;
	*/
	/* 
	//size_t find_first_of(const string& str, size_t pos = 0) const;
	//從pos開始，找出str中的任何一個字元，第一次出現的位置。若不存在，值為npos(-1)。
	//此 find_first_of與find並沒有任何關係
	string s1 = "I love Java. Java is good. Java is very Good.";
	size_t st = s1.find_first_of("aeiou");
	cout << st << endl; 
	*/
	/* 
	//string substr(size_t pos = 0,size_t len = npos)const;
	//運算出一個新的 string 物件，其內容為本物件籤pos開始長度len的內容。
	string s1 = "I love Java. Java is good. Java is very Good.";
	string s2 = s1.substr(7,4);
	cout << s2 << endl;
	*/
	 
	//綜合應用
	string s1 = "C, C++, Java";
	string s2 = ",";
	int count = 0;
	size_t startPos = 0;
	do{
		size_t st = s1.find(s2,startPos);
		if(st == string::npos){
			break;
		}
		count++;
		startPos = st + s2.size();
	}while(true);
	string words[count + 1];
	startPos = 0;
	for(int i = 0; i <= count; i++){
		size_t st = s1.find(s2,startPos);
		words[i] = s1.substr(startPos, st - startPos);
		startPos = st + 1; 
	}
	for(int i = 0; i <= count; i++){
		cout << words[i] << "\t";
	}
	cout << endl;
	 
	 
	return 0;
}
