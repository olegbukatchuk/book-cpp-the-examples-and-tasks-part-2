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
                
            }
        }
    }
};