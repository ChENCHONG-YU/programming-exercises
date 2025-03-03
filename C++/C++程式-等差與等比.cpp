#include <iostream>
using namespace std;

int main()
{
    int n;
    
    double sequence[5];
    
    double d;
    double r;
    
    cin >> n;
    for(int i = 0; 0 < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> sequence[j];
        }
        //兵ン才单畉兵ンぃ才单ゑ
        if(sequence[1] - sequence[0] == sequence[2] - sequence[1]){
            d = sequence [1] - sequence[0];
            sequence[4] = sequence[3] + d;
            
            for(int j = 0; j < 5; j++){
                cout << sequence[j] << ' ';
            }
            cout << endl;
            
        }else{
            r = sequence[1] / sequence[0];
            sequence[4] = sequence[3] * r;
            
            for(int j = 0; j < 5; j++){
                cout << sequence[j] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
