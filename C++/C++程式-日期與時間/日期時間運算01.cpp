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
   // struct tm t = {0};  //�o�˪��g�k�N�O�p�G�U���S�����w�Ȫ�l�N��0 
    /*�q�t�Τ��ӬݡAstruct tm��tm_year�O�q1900�}�l�_��A�p�U��:
	 Mmeber  | Type |     Meaning           |  Range
	 tm_min  | int  | minutes after the hour|  0 ~ 59
	 tm_mday | int  | day of the month      |  0 ~ 23 
	 tm_mon  | int  | months since January  |  0 ~ 11
	 tm_year | int  | years since 1900      |
	 
	 �ҥH�o��A�����Ȫ��ɭԳ̦n��~�1900�A��1 
    */
    /*
    t.tm_year = 2025 - 1900;
    t.tm_mon = 4 - 1;
    t.tm_mday = 8;
    //���Ȯɸӥ[���N��L�[�^�� 
    cout << t.tm_year + 1900<< "/" << t.tm_mon + 1<< "/" << t.tm_mday << endl;  
    //�H�W���o�˰��k�i�H�קKtm�ᵹ����@�Ө禡�@�B��ɵo�Ϳ��~ 
	*/
	//----------------------------------------------------------------------------------
	/*
	time_t t = time(NULL);
    struct tm * pt = localtime(&t);
    cout << pt -> tm_year + 1900<< "/" << pt -> tm_mon + 1<< "/" << pt -> tm_mday << endl;
	
	char * result = new char[30];
	strftime(result , 30, "Now is �G %Y/%m/%d %H:%M:%S", pt);
	cout << result << endl;   //Now is �G 2025/04/08 16:29:35 (��Ѫ�����P�ɶ�) 
    */
    //----------------------------------------------------------------------------------
    /* 
    struct tm startDate = {0};
    startDate.tm_year = 2025 - 1900;
    startDate.tm_mon = 4 - 1;
    startDate.tm_mday = 8;
    cout << "The start date is �G" <<  startDate.tm_year + 1900  << 
    "/" << startDate.tm_mon + 1 << "/" << startDate.tm_mday << endl; 
    
    time_t endTime = mktime(&startDate);
    endTime += 86400 * 300;
    struct tm * endDate = localtime(&endTime);
	cout << "The end date is �G" <<endDate -> tm_year + 1900<< "/" << endDate -> tm_mon + 1<< "/" << endDate -> tm_mday << endl;
	*/
	//----------------------------------------------------------------------------------
//	                         ��̫᪺�����̭�}�l������t�F�h�֤� 


    /*
    mktime: 
    ���Ѥ@�� struct tm ���c�]�i�H�ۦ�]�w�~���ɤ����^�A

    mktime �|���A�ഫ���q 1970�~1��1�� 00:00:00 UTC�]epoch�^ ��Ӯɶ�����ơ]�]�N�O time_t �榡�^�C

    �åB�|�۰ʮե��ɶ��]�Ҧp�]�w�� 13 ����]�|�۰��ܦ��j�~ 1 ��^�C


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
    //difftime (�p��ɶ��t) 
//    double d = difftime(endTime,startTime);  //�]�� difftime���禡��return type�N�Odouble�A�ҥH�o��N�|�ŧi��double 
//    double days = d / 86400;

    //�]�i�H�g���o�� ������
    
    double days = difftime(endTime,startTime) / 86400;
    
    cout << days << endl;
	
	
	
	return 0;
} 
