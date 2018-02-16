#include <iostream>
using namespace std;

class MyClass {
public:
    int m,n;

    MyClass() {
        m=0;
        n=0;
    }

    MyClass(int a) {
        m=a;
        n=a;
    }

    MyClass(int a,int b) {
        m=a;
        n=b;
    }

    void show() {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(1);
    MyClass obj3(2,3);

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}