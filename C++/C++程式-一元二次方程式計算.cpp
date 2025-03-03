#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int D = b*b-4*a*c;
    int x1 = (-b + sqrt(D)) / (2 * a);
    int x2 = (-b - sqrt(D)) / (2 * a);
    if(D < 0){
        cout << "No real root" << endl;
    }else if(D == 0){
        
        cout << "Two same roots x=" << x1 << endl;
    }else if(D > 0){
        cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
    }

    return 0;
}
