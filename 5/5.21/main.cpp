#include <iostream>
#include <cmath>
using namespace std;

void set(double *a, int N,double x) {
    int i;
    a[0]=1;
    for(i=1;i<=N;i++)
        a[i]=a[i-1]*(-1)*x*x/(2*i-1)/(2*i);
}

void show(double *a,int k) {
    int i;
    for(i=0;i<=k;i++) cout<<a[i]<<" ";
    cout<<endl;
}

