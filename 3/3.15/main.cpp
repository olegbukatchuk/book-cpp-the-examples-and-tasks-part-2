#include <iostream>

using namespace std;

int main() {
    double A[2][2];
    double det;

    int i,j;
    cout<<"Matrix A:\n";
    for (i=0;i<2;i++)
        for (j=0;j<2;j++)
            cin>>A[i][j];
    det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
    cout<<"det(A) = "<<det<<endl;

    return 0;
}