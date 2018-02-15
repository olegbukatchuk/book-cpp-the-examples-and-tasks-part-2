#include <iostream>
#include <cmath>
using namespace std;

const int n=4;

class Polynom {
public:
    double a[n+1];
    double P(double x) {
        double s=0;
        int i;

        for(i=0;i<=n;i++) {
            s+=a[i]*pow(x,i);
            return s;
        }
    }

    Polynom Deriv() {
        Polynom tmp;
        int i;
        tmp.a[n]=0;

        for(i=n-1;i>=0;i--) {
            tmp.a[i]=a[i+1]*(i+1);
            return tmp;
        }
    }
};

void show(Polynom obj,double x1,double x2) {
    double h=(x2-x1)/5;
    int i;
    cout<<"x: ";
}