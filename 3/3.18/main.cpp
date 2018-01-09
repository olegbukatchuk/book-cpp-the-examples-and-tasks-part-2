#include <iostream>

using namespace std;

int main() {
    const int n=10;
    int i;
    double x[n],y[n];
    double a,b;
    double Sx=0,Sy=0,Sxy=0,Sxx=0;

    cout<<"x = ";
    for (i=0;i<n;i++)
        cin>>x[i];

    cout<<"y = ";
    for (i=0;i<n;i++)
        cin>>y[i];

    for (i=0;i<n;i++) {
        Sx+=x[i];
        Sy+=y[i];
        Sxy+=x[i]*y[i];
        Sxx+=x[i]*x[i];
    }

    Sx/=n;
    Sy/=n;
    Sxy/=n;
    Sxx/=n;
    
    a=(Sx*Sy-Sxy)/(Sx*Sx-Sxx);
    b=(Sxy-a*Sxx)/Sx;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}