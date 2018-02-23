#include <iostream>

using namespace std;

template <class X> void show(X arg) {
    cout<<"Value is "<<arg<<endl;}

int main() {
    int n=5;
    double x=3.6;
    char s='a';

    show(n);
    show(x);
    show(s);

    return 0;
}