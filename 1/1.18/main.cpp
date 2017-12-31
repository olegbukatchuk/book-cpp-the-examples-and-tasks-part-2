#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p,p1,P,q;

    int n;

    cout<<"p = ";
    cin>>p;

    (p<0||p>1)?(cout<<"Wrong value!"<<endl,exit(0)):cout<<"n = ";
    cin>>n;

    q=(1-p)*(1-p1);
    P=p*p1*(1-pow(q,n)/(1-q));

    cout<<"P = "<<P<<endl;

    return 0;
}