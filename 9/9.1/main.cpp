#include <iostream>
using namespace std;

class MyClass {
public:
    int m,n;

    MyClass() {
        m=0;
        n=0;
    }

    void show() {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};

