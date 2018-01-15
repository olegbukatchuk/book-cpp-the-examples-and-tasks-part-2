#include <iostream>
#include <cmath>

using namespace std;

double MyProd(double x,int N) {
    if (N>0) return MyProd(x,N-1)*(1+pow(x,pow(2,N)));
    else return 1+x;
}

int main() {
    double x;
    int N;

    cout<<"Enter x = ";
    cin>>x;

    cout<<"Enter N = ";
    cin>>N;

    cout<<"Product value: "<<MyProd(x,N)<<endl;
    cout<<"Test value: "<<1/(1-x)<<endl;

    return 0;
}