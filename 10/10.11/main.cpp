#include <iostream>
#include <cstdlib>
using namespace std;

const int n=10;

class RealNums {
public:
    int p[n];

    RealNums() {
        int k;
        for(k=0;k<n;k++)
            p[k]=rand()%n;
    }

    int &operator[] (int i) {
        return p[i];
    }

    RealNums operator+(RealNums obj) {
        int i;
        RealNums tmp;
        for(i=0;i<n;i++)
            tmp[i]=p[i]+obj[i];
        return tmp;
    }

    void show() {
        int i;
        for(i=0;i<n;i++)
            printf("%3d",p[i]);
        cout<<endl;
    }
};

int main() {
    RealNums a,b;
    a.show();
    b.show();
    (a+b).show();
    for(int i=0;i<n;i++)
        a[i]=b[i]-a[i];
    a.show();

    return 0;
}