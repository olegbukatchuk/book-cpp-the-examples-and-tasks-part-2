#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int N=3;
    int i,k,n=10;

    double x,f,df;
    double a[N+1];
    double b[N];

    cout<<"Function: ";
    cin>>a[0];

    for (i=1;i<N+1;i++) {
        cin>>a[i];
        b[i-1]=i*a[i];
    }

    cout<<"Enter x0 = ";
    cin>>x;

    for (k=1;k<=n;k++) {
        f=a[0];
        df=0;

        for (i=1;i<N+1;i++) {
            f+=a[i]*pow(x,i);
            df+=b[i-1]*pow(x,i-1);
        }
        x-=f/df;
    }

    cout<<"x = "<<x<<endl;
    cout<<"f("<<x<<") = "<<f<<endl;

    return 0;
}
