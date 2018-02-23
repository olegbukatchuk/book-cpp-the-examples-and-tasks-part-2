#include <iostream>
using namespace std;

template <class X> void change(X &a,X &b) {
    X t;
    t=a;
    a=b;
    b=t;
}

void change(int &a,int &b) {
    int t;
    t=a;
    a=b+1;
    b=t+1;
}

int main() {
    double x=2.3,y=4.5;
    int m=6,n=8;

    change(x,y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    change(m,n);
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;

    return 0;
}