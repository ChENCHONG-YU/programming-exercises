#include <iostream>
#include <ctime>
using namespace std;

int main(){
	/*
	time_t a = time(NULL);
	cout << a << endl;
	
	char * b = ctime(&a);
	cout << b << endl; 
	*/
	//----------------------------------------------------------------------------------
	/*
	time_t c;
	time(&c);
	char * d = ctime(&c);
	cout << d << endl;
	*/
	//----------------------------------------------------------------------------------
	/*
	time_t * e = new time_t;
	time(e);
	char * f = ctime(e);
	cout << f << endl;
    */
    //----------------------------------------------------------------------------------
   // struct tm t = {0};  //這樣的寫法就是如果下面沒有給定值初始就給0 
    /*從系統文件來看，struct tm的tm_year是從1900開始起算，如下表:
	 Mmeber  | Type |     Meaning           |  Range
	 tm_min  | int  | minutes after the hour|  0 ~ 59
	 tm_mday | int  | day of the month      |  0 ~ 23 
	 tm_mon  | int  | months since January  |  0 ~ 11
	 tm_year | int  | years since 1900      |
	 
	 所以這邊再指派值的時候最好把年減掉1900，月減掉1 
    */
    /*
    t.tm_year = 2025 - 1900;
    t.tm_mon = 4 - 1;
    t.tm_mday = 8;
    //取值時該加的就把他加回來 
    cout << t.tm_year + 1900<< "/" << t.tm_mon + 1<< "/" << t.tm_mday << endl;  
    //以上的這樣做法可以避免tm丟給任何一個函式作運算時發生錯誤 
	*/
	//----------------------------------------------------------------------------------
	/*
	time_t t = time(NULL);
    struct tm * pt = localtime(&t);
    cout << pt -> tm_year + 1900<< "/" << pt -> tm_mon + 1<< "/" << pt -> tm_mday << endl;
	
	char * result = new char[30];
	strftime(result , 30, "Now is ： %Y/%m/%d %H:%M:%S", pt);
	cout << result << endl;   //Now is ： 2025/04/08 16:29:35 (當天的日期與時間) 
    */
    //----------------------------------------------------------------------------------
    /* 
    struct tm startDate = {0};
    startDate.tm_year = 2025 - 1900;
    startDate.tm_mon = 4 - 1;
    startDate.tm_mday = 8;
    cout << "The start date is ：" <<  startDate.tm_year + 1900  << 
    "/" << startDate.tm_mon + 1 << "/" << startDate.tm_mday << endl; 
    
    time_t endTime = mktime(&startDate);
    endTime += 86400 * 300;
    struct tm * endDate = localtime(&endTime);
	cout << "The end date is ：" <<endDate -> tm_year + 1900<< "/" << endDate -> tm_mon + 1<< "/" << endDate -> tm_mday << endl;
	*/
	//----------------------------------------------------------------------------------
//	                         算最後的日期跟最剛開始的日期差了多少天 


    /*
    mktime: 
    提供一個 struct tm 結構（可以自行設定年月日時分秒等），

    mktime 會幫你轉換成從 1970年1月1日 00:00:00 UTC（epoch） 到該時間的秒數（也就是 time_t 格式）。

    並且會自動校正時間（例如設定成 13 月份也會自動變成隔年 1 月）。


	*/
	 
	struct tm startDate = {0};
    startDate.tm_year = 2025 - 1900;
    startDate.tm_mon = 1 - 1;
    startDate.tm_mday = 28;
    time_t startTime = mktime(&startDate);
    
    struct tm endDate = {0};
    endDate.tm_year = 2025 - 1900;
    endDate.tm_mon = 9 - 1;
    endDate.tm_mday = 5;
    time_t endTime = mktime(&endDate);
    /*
    time_t result = endTime - startTime;
    
    int days = result / 86400;
    */
    //difftime (計算時間差) 
//    double d = difftime(endTime,startTime);  //因為 difftime的函式的return type就是double，所以這邊就會宣告成double 
//    double days = d / 86400;

    //也可以寫成這樣 ↓↓↓
    
    double days = difftime(endTime,startTime) / 86400;
    
    cout << days << endl;
	
	
	
	return 0;
} 
