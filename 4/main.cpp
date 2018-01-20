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



