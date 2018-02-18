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

int main() {
    int i=10,j=20,k=30;
    Outer a(i);
    Outer b(j,k);
    cout<<"a.m: "<<a.m<<" a.obj.n: "<<a.obj.n<<endl;
    cout<<"b.m: "<<b.m<<" b.obj.n: "<<b.obj.n<<endl;

    return 0;
}