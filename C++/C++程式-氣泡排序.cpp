#include <iostream>
using namespace std;
int main(){
	int amount,tmp;  //宣告變數 
	cout << "Enter the sequence size" << endl;  //首先執行先輸出這段並且換行 (cout是輸出的意思) 
	cin >> amount;    //輸入數字的上限 EX:10或是20 (cin為輸入的意思) 
	cout << "Input value" << endl;    //輸出 Input value文字並且換行 
	int * m_Sequence = new int[amount];  //宣告動態陣列 
	for(int i = 0;i < amount ;i++){
		cin >> m_Sequence[i];   //輸入數字陣列 EX: 5 20 -100 3 7 57 9 (如果超出範圍將不會執行超出的部分) 
	} 
	
	//氣泡排序 (數字由小到大整理整理) EX;假設 m_Sequence[i]為X[0]=2,m_Sequence[i+1]為X[1]=1
	for(int i = 0; i < (amount-1);i++){
		if(m_Sequence[i] > m_Sequence[i+1])  //如果前面數字比後面數字大 
		{
			tmp = m_Sequence[i];  // 將X[0]的內容暫存到tmp 
			m_Sequence[i] = m_Sequence[i+1];  //然後再把X[1]內容丟到X[0] 
			m_Sequence[i+1] = tmp; //最後再把暫存在tmp的內容丟到X[1]
			i = -1; 
		}
	}
	//經過以上整理，假設的輸出結果為1 2  
	
	//將整理完的結果輸出 
	for(int i = 0; i < amount; i++){
	    cout << m_Sequence[i] << endl;
    }

    delete [] m_Sequence;  //刪除動態陣列 
    return 0; //程式結束 
	
}


