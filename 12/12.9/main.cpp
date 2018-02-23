#include <iostream>
#include <cstdlib>

using namespace std;

template <class X,class Y,int n> class MyClass {
public:
    X xarray[n];
    Y yarray[n];

    MyClass() {
        srand(1);

        for(int i=0;i<n;i++){
            xarray[i]=(X)(100+rand()%10);
            yarray[i]=(Y)(100+rand()%10);
        }
    }

    void getx() {
        for(int i=0;i<n;i++)
            cout<<xarray[i]<<" ";
        cout<<endl;
    }

    void gety() {
        for(int i=0;i<n;i++)
            cout<<yarray[i]<<" ";
        cout<<endl;
    }
};

int main() {
    const int n=3,m=5;

    MyClass<int,char,n> a;
    MyClass<char,double,m> b;

    a.getx();
    a.gety();
    b.getx();
    b.gety();

    return 0;
}