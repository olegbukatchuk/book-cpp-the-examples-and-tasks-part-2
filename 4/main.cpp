#include <iostream>
#include <cstdlib>

using namespace std;

double avr(double *x,int n) {
    int i;
    double s=0;

    for(i=0;i<n;i++) s+=x[i];
    s/=n;

    return s;
}

double avr(double *x,int n1,int n2) {
    int i,n=n2-n1+1;
    double s=0;

    for(i=n1-1;i<n2;i++) s+=x[i];
    s/=n;

    return s;
}



