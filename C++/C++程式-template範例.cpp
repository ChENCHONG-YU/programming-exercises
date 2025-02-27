#include <iostream>
using namespace std;

template <class T>
T add5(T value){
    return value + 5;
}

int main()
{
    int a = 1;
    float b = 1.3f;
    cout << "a = " << add5(a) << ' ' << "b = " << add5(b) << endl;
    return 0;
}
