#include <iostream>
#include <cstdlib>

using namespace std;

const double N=3;

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
        for(j=0;j<N;j++) {
            A[i][j]=rand()%10;
        }
    }
}

void show(double A[N][N]) {
    int i,j;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            cout<<endl;
        }
    }
}

int main() {
    double A[N][N],B[N][N];
    cout<<"Initial matrix:\n";
    fill(A);
    show(A);

    cout<<"After transformation:\n";
    trans(A,B);
    show(B);

    cout<<"Initial matrix:\n";
    fill(A);
    show(A);

    cout<<"After transform:\n";
    trans(A);
    show(A);

    return 0;
}