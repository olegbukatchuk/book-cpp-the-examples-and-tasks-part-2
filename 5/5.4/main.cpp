#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    const int n=20;
    char str[20];

    for(i=0;i<n;i++) {
        str[i]='A'+1;
        cout<<str[i];
    }

    cout<<endl;

    cout<<"Enter a string: ";
    gets(str);

    cout<<str<<endl;

    for()

}