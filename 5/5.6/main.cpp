#include <iostream>
#include <cstdio>
using namespace std;

int length(char *str) {
    int i=0;

    while(str[i]) {
        i++;
    }

    return i;
}

int main() {
    char str[80];

    cout<<"Enter a string: ";
    gets(str);
    cout<<"String length is "<<length(str)<<endl;

    return 0;
}