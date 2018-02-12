#include <iostream>
using namespace std;

class B;

class A {
    double x;
public:
    A(double z) {x=z;}
    friend double summa(A a,B b);
} a(3.5);

class B {
    double y;
public:
    B(double z) {y=z;}
    friend double summa(A a,B b);
} b(2.3);

double summa(A a,B b) {
    return a.x+b.y;
}

int main() {
    cout<<"Total is "<<summa(a,b)<<endl;

    return 0;
}
