#include <iostream>
using namespace std;

class MyClass {
public:
    int m,n;

    MyClass() {
        m=0;
        n=0;
        cout<<"Object has been created"<<endl;
    }

    ~MyClass() {
        cout<<"Object has been deleted"<<endl;
    }
};

int main() {
    MyClass obj;

    return 0;
}