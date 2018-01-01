#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;

    int n=100,i;
    x=0;

    for (i=1;i<=n;i++) {
        x=(x*x+6)/5;
    }

    cout<<"x = "<<x<<endl;

    x=5;

    for (i=1;i<=n;i++) {
        x=sqrt(5*x-6);
    }

    cout<<"x = "<<x<<endl;

    return 0;
}