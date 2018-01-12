#include <iostream>

using namespace std;

double sqr(double x) {
    return x*x;
}

double cube(double x) {
    return x*x*x;
}

void myfunc(double x, double (*f)(double)) {
    cout<<f(x)<<endl;
}

int main() {
    double z;
    double (*p)(double);

    cout<<"z = ";
    cin>>z;

    p=cube;

    myfunc(z,sqr);
    myfunc(z,p);

    cout<<sqr<<endl;
    cout<<cube<<endl;
    cout<<p<<endl;

    return 0;
}