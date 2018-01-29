#include <iostream>
using namespace std;

class SimpleClass {
public:
    int m;
    int n;

    int summa() {
        int k=n+m;
        return k;
    }

    void show() {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }

    void mult(int k) {
        n*=k;
        m*=k;
    }
};

int main() {
    SimpleClass MyObj1, MyObj2;

    MyObj1.m=1;
    MyObj1.n=2;
    MyObj2.m=8;
    MyObj2.n=9;

    cout<<"Total value for MyObj1 is "<<MyObj1.summa()<<endl;
    cout<<"Total value for MyObj2 is "<<MyObj2.summa()<<endl;

    
}
