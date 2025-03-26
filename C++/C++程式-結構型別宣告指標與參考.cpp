#include <iostream>
using namespace std;

struct Circle{
    int radius;
    int height;
    double girth;
    double area;
    double volume;
}variableA,variableB,
*PointerA,*PointerB = new struct Circle,
&referenceA = variableA, *&referenceB = PointerB;  //這邊在宣告的時候必須要立刻指派

int main()
{
    cout << "variable:" << endl;
    variableA.radius = 10;
    cout << variableA.radius << endl;
    variableB.radius = 20;
    cout << variableB.radius << endl;
    struct Circle variableC;
    variableC.radius = 30;
    cout << variableC.radius << endl;
    
    //結構型別宣告指標三種寫法：
    cout << "-----------------------------------" << endl;
    cout << "Pointer:" << endl;
    //寫法一：
    PointerA = new struct Circle; //因為PointerA是一個指標，所以這邊必須new一個記憶體給他
    PointerA -> radius = 40;      //把40存到資料成員radius裡面
    cout << PointerA -> radius << endl;

    //寫法二：
    PointerB -> radius = 50;
    cout << PointerB -> radius << endl;

    //寫法三：
    struct Circle *PointerC = new struct Circle;
    PointerC -> radius = 60;
    cout << PointerC -> radius << endl;
    
    //結構型別宣告(參考)：
    cout << "-----------------------------------" << endl;
    cout << "Reference:" << endl;
    referenceA.radius = 70;
    cout << referenceA.radius << endl;
    referenceB -> radius = 80;
    cout << referenceB -> radius << endl;
    struct Circle &referenceC = variableC;
    referenceC.radius = 90;
    cout << referenceC.radius << endl;
    
    struct Circle *&referenceD = PointerC;
    referenceD -> radius = 100;
    cout << referenceD -> radius << endl;
    
    
    return 0;
}