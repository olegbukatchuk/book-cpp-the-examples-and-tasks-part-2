#include <iostream>
#include <cstdlib>
using namespace std;

const int n=9;

class Interpol {
    double psi(int i, double z) {
        double tmp=1;
        int j;

        for(j=0;j<i;j++) {
            tmp*=(z-x[j])/(x[i]-x[j]);
        }

        for(j=i+1;j<=n;j++) {
            tmp*=(z-x[j])/(x[i]-x[j]);
        }

        return tmp;
    }

public:
    double x[n+1];
    double y[n+1];
    double Lagr(double z) {
        double s=0;
        int i;

        for(i=0;i<=n;i++) {
            s+=y[i]*psi(i,z);
        }

        return s;
    }
};

int main() {
    int i;
    double x;
}