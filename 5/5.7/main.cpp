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