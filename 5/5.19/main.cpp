#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i,j,n;
    int **A,**B,**C;

    cout<<"Enter n = ";
    cin>>n;

    A=new int*[n];
    B=new int*[n];
    C=new int*[n];

    for(i=0;i<n;i++) {
        A[i]=new int[n];
        B[i]=new int[n];
        C[i]=new int[n];
    }

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            A[i][j]=rand()%5;
            B[i][j]=rand()%5;
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    for(i=0;i<n/2;i++) {
        for(j=0;j<n;j++) cout<<A[i][j]<<" ";
        cout<<" ";
        for(j=0;j<n;j++) cout<<B[i][j]<<" ";
        cout<<" ";
        for(j=0;j<n;j++) cout<<C[i][j]<<" ";
        cout<<endl;
    }

    for(j=0;j<n;j++) cout<<A[n/2][j]<<" ";
    cout<<"+ ";
    for(j=0;j<n;j++) cout<<B[n/2][j]<<" ";
    cout<<"= ";
    for(j=0;j<n;j++) cout<<C[n/2][j]<<" ";
    cout<<endl;

    for(i=n/2+1;i<n;i++) {
        for(j=0;j<n;j++) cout<<A[i][j]<<" ";
        cout<<" ";
        for(j=0;j<n;j++) cout<<B[i][j]<<" ";
        cout<<" ";
        for(j=0;j<n;j++) cout<<C[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}