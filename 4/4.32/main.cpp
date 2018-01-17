#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double avr(double *x,int n) {
    int i;
    double s=0;

    for (i=0;i<n;i++) s+=x[i];
    s/=n;

    return s;
}

double avr(double *x,int n1,int n2) {
    int i,n=n2-n1+1;
    double s=0;

    for (i=n1-1;i<n2;i++) s+=x[i];
    s/=n;
    return s;
}

double dev(double *x,int n) {
    double x0,s=0;
    int i;
    x0=avr(x,n);

    for (i=0;i<n;i++) s+=x[i]*x[i];
    s/=n;
    return s-x0*x0;
}

double dev(double *x,int n1,int n2) {
    double x0,s=0;
    int i,n=n2-n1+1;
    x0=avr(x,n1,n2);

    for (i=n1-1;i<n2;i++) s+=x[i]*x[i];
    s/=n;
    return s-x0*x0;
}

void ShowStat(double *x,int n) {
    cout<<"Avarage is "<<avr(x,n)<<endl;
    cout<<"Dispersion is "<<sqrt(dev(x,n))<<endl;
}

void ShowStat(double *x,int n1,int n2) {
    cout<<"Avarage is "<<avr(x,n1,n2)<<endl;
    cout<<"Dispersion is "<<dev(x,n1,n2)<<endl;
    cout<<"Deviation is "<<sqrt(dev(x,n1,n2))<<endl;
}

void fill(double *x,int n) {
    for (int i=0;i<n;i++) {
        x[i]=rand()%10;
    }
}

void show(double *x,int n) {
    for (int i=0;i<n;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

int main() {
    const int N=10;
    double z[N];

    fill(z,N);
    cout<<"Base data:\n";

    show(z,N);
    cout<<"Base statistics:\n";

    ShowStat(z,N);
    cout<<"Small statistics:\n";

    ShowStat(z,3,N-2);

    return 0;
}