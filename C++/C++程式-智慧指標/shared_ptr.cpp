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
    shared_ptr<MyClass> ptr2 = ptr1;
    cout << "Use count: " << ptr1.use_count() << endl;  //2
    return 0;
}
