#include <iostream>
using namespace std;

class MyExp {
public:
    int n;
    double *p;

    MyExp(int i,double x) {
        n=i;
        p=new double[n+1];
        p[0]=1;

        for(int k=1;k<=n;k++)
            p[k]=p[k-1]*x/k;
    }

    ~MyExp() {
        delete [] p;
    }
};

