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

double MyCos(double *a,int k) {
    double s=0;
    int i;
    for(i=0;i<=k;i++) s+=a[i];
    return s;
}

int main() {
    int i,N;
    double x;
    double *a;

    cout<<"Enter x = ";
    cin>>x;

    cout<<"Enter N = ";
    cin>>N;

    a=new double[N+1];
    set(a,N,x);
    show(a,N);

    for(i=1;i<=5;i++)
        cout<<N*i/5<<" : "<<MyCos(a,N*i/5)<<" : "<<(1-MyCos(a,N*i/5)/cos(x))*100<<"%\n";
    cout<<"cos(x) = "<<cos(x)<<endl;

    return 0;
}