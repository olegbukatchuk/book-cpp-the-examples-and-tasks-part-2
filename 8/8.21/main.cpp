#include <iostream>
using namespace std;

const int N=100;

class Matrix {
public:
    double a[2][2];

    Matrix mult(Matrix obj) {
        Matrix T;
        int i,j,k;

        for(i=0;i<2;i++) {
            for(j=0;j<2;j++) {
                T.a[i][j]=0;
                for(k=0;k<2;k++)
                    T.a[i][j]+=a[i][k]*obj.a[k][j];
            }
        }
        return T;
    }

    Matrix mSum(Matrix obj) {
        Matrix T;
        int i,j;

        for(i=0;i<2;i++) {
            for(j=0;j<2;j++)
                T.a[i][j]=a[i][j]+obj.a[i][j];
        }
    }
};