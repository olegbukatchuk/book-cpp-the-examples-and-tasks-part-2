#include <iostream>
using namespace std;


void ShowStr(char *str) {
    if (*str!='i'&&*str) ShowStr(str+1);
    else 
}