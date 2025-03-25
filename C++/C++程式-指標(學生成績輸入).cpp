#include <iostream>
using namespace std;
int main()
{
    int classCount;
    cout << "請輸入班級數量 =>";
    cin >> classCount;
    double * ave = new double[classCount];
    
    for(int i = 0; i < classCount; i++){
        int count;
        cout << "請輸入學生人數 =>";
        cin >> count;
        
        int * scores = new int[count];
        for(int j = 0; j < count; j++){
            cout << "請輸入第"<< j + 1 <<"位學生成績 =>";
            cin >> scores[j];
        }
        
        double total = 0;
        for(int j = 0; j < count; j++){
            total += scores[j];
        }
        ave[i] = total / count;
        delete scores;
    }
    
    for(int i = 0; i < classCount; i++){
        cout << ave[i] << endl;
    }
    return 0;
}