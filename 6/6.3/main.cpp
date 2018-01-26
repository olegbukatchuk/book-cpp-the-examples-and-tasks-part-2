#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Marks {
    char name[80];
    int phys;
    int chem;
    int maths;
};

void set_one(Marks &str) {
    cout<<("Student name: ");
    gets(str.name);
    str.phys=3+rand()%3;
    str.chem=3+rand()%3;
    str.maths=3+rand()%3;
}

void set_all(Marks *str,int m) {
    for(int i=0;i<m;i++) set_one(str[i]);
}

void get(Marks *str,int m) {
    bool state;
    char s[80];
}