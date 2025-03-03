#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   string str;
   int i;
   
   /*
   1.getline(cin ,str);   // 用於從標準輸入獲取一整行字串，包括空格，適合用來讀取帶有空格的用戶輸入。
   2.讀取特殊字元 getline(cin, str, '#') 可以使用第三個參數指定結束符號，
   在此例中會讀取直到遇到'#'為止。
   3.清除輸入緩衝區 若在使用 getline() 前有其他輸入，可以用 cin.ignore()
    清除緩衝區，否則可能會跳過提示輸入。
   */   
   getline(cin ,str);
   
   for(i = 0; i < str.size(); i++){
       cout << char(str[i] - 7);
   }
    return 0;
}
