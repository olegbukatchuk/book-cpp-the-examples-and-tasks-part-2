#include <iostream>
#include <cmath>
using namespace std;

double phi(double x) {
    return sqrt(1+x);
}

void show(double *x,int n) {
    int i;
    for(i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;
}

int main() {
    int i,n;
    double *x;

    cout<<"Enter n = ";
    cin>>n;
    x=new double[n+1];
    cout<<"Enter x0 = ";
    cin>>x[0];

    for(i=1;i<=n;i++) x[i]=phi(x[i-1]);
    show(x,n+1);

    return 0;
}