#include <iostream>

using namespace std;

int main() {
    const int m=10;

    int MyArray[m];
    int i,j,s;
    cout<<"Become:\n";

    for (i=0;i<m;i++) {
        MyArray[i]=rand()%20;
        cout<<MyArray<<" ";
    }

    for (j=1;j<(m-j);j++) {
        for (i=0;i<m-j;i++) {
            if (MyArray[i]>MyArray[i+1]) {
                s=MyArray[i+1];
                MyArray[i+1]=MyArray[i];
                MyArray[i]=s;
            }
            cout<<"\nAfter:\n";
        }
    }

    for (i=0;i<m;i++) {
        cout<<MyArray[i]<<" ";
    }
    cout<<"\n";

    return 0;
}