#include <iostream>
using namespace std;

class MyClass {
public:
    double x;
    void show() {
        cout<<"x = "<<x<<endl;
    }
} a,b;

MyClass &f(bool arg) {
    if(arg) return a;
    else return b;
}

int main() {
    f(true).x=5;
    f(true).show();

    cout<<"x = "<<a.x<<endl;

    f(false).x=10;
    f(false).show();

    cout<<"x = "<<b.x<<endl;

    return 0;
}