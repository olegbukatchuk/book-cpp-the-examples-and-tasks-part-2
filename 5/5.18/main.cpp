#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void getWord(char *s1,char *s2,int n) {
    int i=0,j=0;
    int s=1;

    while(s<n) {
        if(s1[i]==' ') {
            s++;
        }
        i++;
    }

    for(;(s1[i]!='\0')&&(s1[i]!=' ')&&(s1[i]!=',')&&(s1[i]!='.')&&(s1[i]!='!')&&(s1[i]!='?');i++,j++)
        s2[j]=s1[i];
    s2[j]='\0';
}

int countWords(char *s) {
    int i,res=1;
    for(i=0;s[i];i++) if(s[i]==' ') res++;
    return res;
}

int findWord(char *s1,char *s2) {
    int i,n;
    char s[30];
    n=countWords(s1);
    for(i=1;i<=n;i++) {
        getWord(s1,s,i);
        if(strcmp(s2,s)==0)
            return i;
    }
    return 0;
}

