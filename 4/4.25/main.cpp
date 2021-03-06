#include <iostream>
#include <cmath>

using namespace std;

const int N=100;

double sinh(double z) {
    int n;
    double s=z,q=z;

    for (n=1;n<=N;n++) {
        q*=z*z/(2*n)/(2*n+1);
        s+=q;
    }
    return s;
}

int main() {
    double x;
    int i,m=9;
    cout<<"Enter x = ";
    cin>>x;

    for (i=1;i<=m;i++) {
        cout<<i<<" : sin("<<x<<") = "<<sin(x)<<endl;
    }

    cout<<"----------------------------------\n";
    cout<<N<<": sinh("<<x<<") = "<<sinh(x)<<endl;
    cout<<"Test value: "<<sinh(x)<<endl;

    return 0;
}