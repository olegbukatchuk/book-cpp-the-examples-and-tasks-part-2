#include <iostream>
using namespace std;

class ClassA {
public:
    double x;
    double y;
} objA;

class ClassB {
public:
    int a;
    int b;

    double f(ClassA obj) {
        return a*obj.x+b*obj.y;
    }
} objB;

void showB(ClassB obj) {
    cout<<"a = "<<obj.a<<endl;
    cout<<"b = "<<obj.b<<endl;
}

int main() {
    objA.x=2.5;
    objA.y=3.6;
    objB.a=2;
    objB.b=5;
    cout<<"Value is "<<objB.f(objA)<<endl;
    showB(objB);
    return 0;
}