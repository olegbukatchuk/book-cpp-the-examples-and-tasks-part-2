#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x,y,X,Y;
    double r,phi,R,Phi;

    int n;

    cout<<"Real part x = ";
    cin>>x;
    cout<<"Imaginary part y = ";
    cin>>y;
    cout<<"Power n = ";
    cin>>n;

    phi=atan2(y,x);
    r=sqrt(x*x+y*y);

    R=pow(r,n);
    Phi=n*phi;

    X=R*cos(Phi);
    Y=R*sin(Phi);

    

    return 0;
}