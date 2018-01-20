#include <iostream>
#include <cstdlib>

using namespace std;

const N=3;

void trans(double A[N][N], double B[N][N]) {
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            B[i][j]=A[j][i];
        }
    }
}

o