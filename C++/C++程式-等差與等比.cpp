#include <iostream>
using namespace std;

int main()
{
    int n;
    
    double sequence[5];
    
    double d;
    double r;
    
    //index值 
    int i,j;
	
	 
    cin >> n;
    for(i = 0; 0 < n; i++){
        for(j = 0; j < 4; j++){
            cin >> sequence[j];
        }
        //條件符合為等差，條件不符合為等比
        if(sequence[1] - sequence[0] == sequence[2] - sequence[1]){
            d = sequence [1] - sequence[0];
            sequence[4] = sequence[3] + d;
            
            for(j = 0; j < 5; j++){
                cout << sequence[j] << ' ';
            }
            cout << endl;
            
        }else{
            r = sequence[1] / sequence[0];
            sequence[4] = sequence[3] * r;
            
            for(j = 0; j < 5; j++){
                cout << sequence[j] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
