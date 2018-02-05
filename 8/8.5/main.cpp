#include <iostream>
using namespace std;

class MyClass {
public:
    int m;
    double n;

    MyClass(int x, double y) {
        m=x;
        n=y;
    }

    void show(bool arg) {
        if (arg) cout<<"m = "<<m<<endl;
        else cout<<"n = "<<n<<endl;
    }
} a(1,2.5),b(3,4.8);

int main() {
    int MyClass::*p;
    double *q;

    MyClass *op;

    void (MyClass::*s) (bool arg);

    p=&MyClass::m;
    q=&a.n;
    s=&MyClass::show;
    op=&b;

    cout<<"a.m: "<<a.*p<<endl;
    cout<<"b.m: "<<op->*p<<endl;
    cout<<"a.n: "<<*q<<endl;
    cout<<"a.snow():\n";
    (a.*s) (true);

    cout<<"b.show():\n";
    (op->*s) (false);

    return 0;
}