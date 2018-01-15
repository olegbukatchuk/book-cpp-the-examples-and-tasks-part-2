#include <iostream>

using namespace std;

double F(double x) {
    return x*x-9*x+14;
}

double FindRoot(double (*f)(double),double a,double b, double eps) {
    double c;

    while ((b-a)/2>eps) {
        c=(a+b)/2;

        if ((f(a)*f(c))>0) a=c;
        else b=c;
    }

    return c;
}

int main() {
    double a,b,eps,x;

    cout<<"interval: ";
    cin>>a;
    cin>>b;

    if (F(a)*F(b)>0) {
        cout<<"Wrong interval!\n";
        return 0;
    }

    cout<<"error: ";
    cin>>eps;
}