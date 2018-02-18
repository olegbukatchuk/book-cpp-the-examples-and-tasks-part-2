#include <iostream>
using namespace std;

class Inner {
public:
    int n;

    Inener() {
        n=0;
        cout<<"Inner-object created with n="<<n<<endl;
    }

    ~Inner() {
        cout<<"Inner-object destroyed with n="<<n<<endl;
    }
};

class Outer {
public:
    int m;
    Inner obj;

    Outer(int i) {
        m=i;
        cout<<"Outer-object created with m="<<m<<endl;
    }

    Outer(int i,int j) {
        m=i;
        obj.n=j;
        cout<<"Outer-object created with m="<<m<<endl;
    }

    ~Outer() {
        cout<<"Outer-object destroyed with m="<<m<<endl;
    }
};

