#include <iostream>

using namespace std;

template <class X> class First {
public:
    X a;
    First(X arg) {
        a=arg;
    }
};

template <class X,class Y> class Second:public First<X> {
public:
    X a;
    Y b;
    void show() {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }

    Second(X arg1,Y arg2): First<X>(arg1) {
        b=arg2;
    }
};

int main() {
    Second<int,char> obj(5,'z');
    obj.show();

    return 0;
}