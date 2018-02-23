#include <iostream>
using namespace std;

const int n=3;

class Matrix{
public:
    int matr[n][n];

    int *operator[](int k) {
        return matr[k];
    }

    Matrix operator+(Matrix obj) {
        Matrix tmp(0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++)
                tmp[i][j]=matr[i][j]+obj[i][j];
        }
        return tmp;
    }

    Matrix operator*(Matrix obj) {
        Matrix tmp(0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                for(int k=0;k<n;k++)
                    tmp[i][j]+=matr[i][k]*obj[k][j];
            }
        }
        return tmp;
    }

    void show(){
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                printf("%3d",matr[i][j]);
            }
            cout<<endl;
        }
    }

    Matrix(int k){
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++)
                matr[i][j]=k;
        }
    }

    Matrix() {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++)
                matr[i][j]=rand()%5-2;
        }
    }
};

int main() {
    Matrix A,B,C(0),D(0);
    cout<<"Matrix A:\n";
    A.show();
    cout<<"Matrix B:\n";
    B.show();
    cout<<"Matrix C=A+B:\n";
    C=A+B;
    C.show();
    cout<<"Matrix D=A*B:\n";
    D=A*B;
    D.show();

    return 0;
}