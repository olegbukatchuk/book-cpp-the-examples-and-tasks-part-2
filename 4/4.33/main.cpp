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

void trans(double A[N][N]) {
    int i,j;
    double s;

    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            s=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=s;
        }
    }
}

void fill(double A[N][N]) {
    int i,j;
    for(i=0;i<N;i++) {
        
    }
}