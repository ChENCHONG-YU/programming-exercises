#include <iostream>
#include <memory>
#include <string>
using namespace std;


class MyClass{
   public:
        MyClass(){
            cout << "Constructor" << endl;
        }
        ~MyClass(){
            cout << "Destructor" << endl;
        }
        void sayHi(){
            cout << "Hello from unique_ptr!" << endl;
        }
        
};


int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
    weak_ptr<MyClass> ptr2 = ptr1;
    ptr1->sayHi();
    cout << "Use Count¡G" <<ptr1.use_count() << endl;   //1
    cout << "Use Count¡G" << ptr2.use_count() << endl;  //1
    
    return 0;
}
