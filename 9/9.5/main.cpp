#include <iostream>
using namespace std;

class MyClass {
public:
    int m,n;

    MyClass(int a,int b) {
        m=a;
        n=b;
        cout<<"Object "<<this<<" has been created"<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }

    ~MyClass() {
        cout<<"Object "<<this<<" has been deleted"<<endl;
    }
};

MyClass MyFunc(int x,int y) {
    MyClass tmp(x,y);
    return tmp;
}

int main() {
    MyClass obj(1,2);
    obj=MyFunc(3,4);

    return 0;
}