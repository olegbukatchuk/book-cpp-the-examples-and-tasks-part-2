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
}