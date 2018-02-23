#include <iostream>

using namespace std;

template <class X> X AddOne(X arg) {
    X t;
    t=arg+1;
    return t;
}

int main() {
    int n=5;
    double x=3.6;
    char s='a';

    cout<<n<<" + 1 = "<<AddOne(n)<<endl;
    cout<<x<<" + 1 = "<<AddOne(x)<<endl;
    cout<<s<<" + 1 = "<<AddOne(s)<<endl;

    return 0;
}