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

int main() {
    const int n=3;
    bool state;
    char s[80];
    Marks students[n];

    for(int i=0;i<n;i++) {
        cout<<("Student name: ");
        gets(students[i].name);
        students[i].phys=3+rand()%3;
        students[i].chem=3+rand()%3;
        students[i].maths=3+rand()%3;
    }
}