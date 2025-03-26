#include <iostream>
using namespace std;
typedef struct{
    char name[30];
    int height;
    int weight;
} Person;

void show(Person x){
    cout << "名字：" << x.name << endl;
    cout << "身高" << x.height << endl;
    cout << "體重" << x.weight << endl;
}

int main()
{
     Person persons[2] = {
        {"Tom",165,60},
        {"Amy",157,65}
    };

    for(int i = 0; i < 2; i++ ){
        show(persons[i]);
    }
    return 0;
}
