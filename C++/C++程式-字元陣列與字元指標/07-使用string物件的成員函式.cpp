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
	//assign()�禡�۷�� "=" �����s���e������A���󤤪��¤��e�|�Q���N�C 
	s1.assign("New String Content");
	ps1->assign("New String Content");  // *ps1 = "New String Content";
	cout << s1 << endl;
	cout << *ps1 << endl;
	
	//append �걵�A�Nstr�걵�쪫��ثe���e���̫᭱�C
	s1.append(" C++");
	ps1->append(" Java");  // *ps1 += "Java";
	cout << s1 << endl;
	cout << *ps1 << endl;
	*/
	
	/*
	string s1 = "1245";
	
	//append + insert   insert(pos,�Q�n��J���r�ꤺ�e)
//	s1.insert(2,"3");   //12345 
	s1.append(s1.insert(2,"3"));  //1234512345 
	cout << s1 << endl;
	
	//erase   erase(size_t pos = 0,size_t len = npos); 

	//s1.erase();
	//cout << "s1:" << s1 << endl;   // s1: (s1�̭����F�賣�Q�M�ŤF�A�ҥH���|�L�X����F��)


	//s1.erase(5);
	//cout << "s1�G" << s1 << endl; // s1:12345(�q��5�Ӧ�m�}�l�M�šA�]�N�O�쥻��1234512345���ĤG��1�}�l) 

	s1.erase(5,3);  //�q��5�Ӧ�m�}�l�M�šA�᭱������3�A�N��ڭn�M�Ū����׬�3
	cout << "s1�G" << s1 << endl; //s1�G1234545 
	
	//replace ���N(���禡�S���w�]��)     replace(�q�ĴX�Ӧ�m�}�l size_t pos,���� size_t len,�n���N�����e);
	s1.replace(5,2,"67");
    cout << "s1�G" << s1 << endl;  //s1�G1234567 
    
    //find �j�M 
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
        startpos = st + replaceWord.size();  //��쪺��m�[�W��i�h���s�Ȧ��X�ӭȨåB�q�Ӧ�m�}�l 
    }while(true);
    
    cout << s1 << endl;
	*/
	/* 
	//size_t find_first_of(const string& str, size_t pos = 0) const;
	//�qpos�}�l�A��Xstr��������@�Ӧr���A�Ĥ@���X�{����m�C�Y���s�b�A�Ȭ�npos(-1)�C
	//�� find_first_of�Pfind�èS���������Y
	string s1 = "I love Java. Java is good. Java is very Good.";
	size_t st = s1.find_first_of("aeiou");
	cout << st << endl; 
	*/
	/* 
	//string substr(size_t pos = 0,size_t len = npos)const;
	//�B��X�@�ӷs�� string ����A�䤺�e����������pos�}�l����len�����e�C
	string s1 = "I love Java. Java is good. Java is very Good.";
	string s2 = s1.substr(7,4);
	cout << s2 << endl;
	*/
	 
	//��X����
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
