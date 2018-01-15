#include <iostream>
#include <cstdlib>

using namespace std;

double F(double x) {
    return x*x-9*x+14;
}

double FindRoot(double (*f)(double), double a, double b, double eps) {
    double c;

    while (abs(f(b)-f(a))>eps) {
        c=(f(b)*a-f(a)*b)/(f(b)-f(a));
        if ((f(a)*f(c))>0) a=c;
        else b=c;
    }

    return c;
}

int main() {
    double a,b,eps,x;

    cout << "interval: ";
    cin>>a;
    cin>>b;

    if (F(a)*F(b)>0) {
        cout<<"Wrong interval!\n";
        return 0;
    }

    cout<<"error: ";
    cin>>eps;

    x=FindRoot(F,a,b,eps);
    cout<<"x = "<<x<<endl;

    return 0;
}
