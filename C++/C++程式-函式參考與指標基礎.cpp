#include <iostream>
using namespace std;

void changeValue1(int & a){
    a += 100;
}
void changeValue2(int *& b){
    *b += 100;
}
void changeValue3(int * c){
    *c += 100;
}
int getValue(const int & d){
    return d * d;
}

int main()
{
   int i = 1;
   changeValue1(i);
   cout << i << endl;
   int *p = new int;
   *p = 1;
   changeValue2(p);
   cout << *p << endl;
   int x = 1;
   changeValue3(&x);
   cout << x << endl;
   
   int y = 5;
   int z = getValue(y);
   cout << z << endl;

    return 0;
}