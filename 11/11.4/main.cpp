#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    virtual void set(int i) {
        x=i;
    }

    virtual void get() {
        cout<<"x = "<<x<<endl;
    }
};

class B: public A {
private:
    int y;
public:
    void set(int i) {
        x=i; y=i;
    }

    void set(int i,int j) {
        x=i;
        y=j;
    }

    void get() {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main() {
    A a;
    B b;
    a.set(1);
    a.get();
    b.set(2);
    b.get();
    b.set(3,4);
    b.get();

    return 0;
}