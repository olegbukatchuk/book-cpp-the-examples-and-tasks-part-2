#include <iostream>
using namespace std;

const int n=10;

class Inner {
public:
    int m;
    int number;

    void show() {
        if(m!=1)
            (this-1)->show();
        cout<<number<<" ";
    }
};

class Outer {
public:
    Inner obj[n];

    Outer() {
        int i;
        obj[0].m=1;
        obj[0].number=1;
        obj[1].m=2;
        obj[1].number=1;

        for(i=2;i<n;i++) {
            obj[i].m=i+1;
            obj[i].number=obj[i-1].number+obj[i-2].number;
        }
    }
};

int main() {
    Outer a;
    a.obj[n/2].show();
    cout<<endl;
    a.obj[n-1].show();
    cout<<endl;

    return 0;
}