#include <iostream>
#include <cstdio>

using namespace std;

void StringIn(char *str1,char *str2,int n) {
    while(n!=0) {
        if(!(*str1)) n--;
        str1++;
    }

    while(*str2) {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}

void StringOut(char *str,int n) {
    while(n!=0) {
        if(!(*str)) n--;
        str++;
    }
    cout<<str<<endl;
}

int main() {
    int i;
    char str[120];
    char s[30];

    for(i=0;i<3;i++) {
        cout<<"Enter a string: ";
        gets(s);
        StringIn(str,s,i);
    }

    StringIn(str,"One more string",3);

    for(i=0;i<=3;i++)
        StringOut(str,i);

    return 0;
}