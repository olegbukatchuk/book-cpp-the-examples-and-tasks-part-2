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
};