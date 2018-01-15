#include <iostream>
using namespace std;

const int N=20;

double F(double x) {
    return x*x-9*x+14;
}

double FindRoot(double (*f)(double),double x0,int n) {
    double x=x0,df,h=0.00001;
    df=(f(x+h)-f(x))/h;

    for (int i=1;i<=n;i++)
        x=x-f(x)/df;

    return x;
}

int main() {
    double x0,x;

    cout<<"Initial x0 = ";
    cin>>x0;

    x=FindRoot(F,x0,N);

    cout<<"x = "<<x<<endl;

    return 0;
}