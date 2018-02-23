#include <iostream>

using namespace std;

class A {
public:
    int n;
};

class B: virtual public A {
public:
    void show() {
        cout<<"n = "<<n<<endl;
    }
};

class C: virtual public A {
public:
    void get() {
        cout<<"n = "<<n<<endl;
    }
};

class D: public B, public C {
public:
    void showAll() {
        show();
        get();
    }
};

int main() {
    D obj;
    obj.n=10;
    obj.showAll();

    return 0;
}