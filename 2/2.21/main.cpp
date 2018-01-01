#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi=3.1415;
    double R,H,V,V0,x,y,z;
    int N=1500,n=0;

    cout<<"Enter R = ";
    cin>>R;
    cout<<"Enter H = ";
    cin>>H;

    V0=4*R*R*(H+R);

    for (int i=0;i<=N;i++) {
        x=2*i*R/N-R;
        for (int k=0;k<=N;k++) {
            z=k*(H+R)/N;
            if (((sqrt(x*x+y*y)/R<=z/H)||((x*x+y*y+(z-H)*(z-H)<=R*R)&&(z>H)))) {
                n++;
            }
        }
    }
    V=V0*n/pow(N+1,3);
    cout<<"V = "<<V<<" : "<<pi*R*R*H/3+2*pi*pow(R,3)/3<<endl;

    return 0;
}