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

double 