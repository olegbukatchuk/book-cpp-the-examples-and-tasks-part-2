#include <iostream>

using namespace std;

template <class X=int> class MyClass {
    X value;
public:
    MyClass(X m) {
        value=m;
    }

    void set(X m) {
        value=m;
    }

    void get() {
        cout<<"value = "<<value<<endl;
    }
};

int main() {
    MyClass<> a(5);
    a.get();
    a.set(3);
    a.get();
    MyClass<char> b('x');
    b.get();
    b.set('z');
    b.get();

    return 0;
}