#include <iostream>
using namespace std;
void ShowDate(int year,int month, int day){
   if(year < 1000 || year > 3000 || month <= 0 || month > 12 || day <= 0 || day > 31){
       cout << "日期格式設定錯誤";
       return;
   }else if(month == 2 && day > 29){
       cout << "日期格式錯誤(2月只有28~29天)";
       return;
   }else if( year % 4 != 0 && month == 2 && day == 29){
       cout << "該年為平年，故2月只有28天";
       return;
   }else if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30){
       cout << "日期格式錯誤(該月只有30天)";
       return;
   }
    cout << "日期：" << year << "/" << month << "/" << day << endl;
}

int main()
{
    int year,month,day;
    cout << "請輸入年:";
    cin >> year;
    cout << "請輸入月：";
    cin >> month;
    cout << "請輸入日：";
    cin >> day;
    ShowDate(year,month,day);
    return 0;
}
