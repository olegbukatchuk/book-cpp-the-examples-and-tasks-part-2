#include <iostream>

using namespace std;

class A {
public:
    int n;
    void shown() {
        cout<<"n = "<<n<<endl;
    }
};

class B {
public:
    int m;

    void showm() {
        cout<<"m = "<<m<<endl;
    }
};

class C: public A, public B {
public:
    void show() {
        shown();
        showm();
    }
};

int main() {
    C obj;
    obj.n=3;
    obj.m=5;
    obj.show();

    return 0;
}