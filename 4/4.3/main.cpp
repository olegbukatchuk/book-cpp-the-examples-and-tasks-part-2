#include <iostream>

using namespace std;

void InvFunc(double z) {
    if(z==0) {
        cout<<"Division by zero!"<<endl;
        return;
    }
    double x;
    x=1/z;
    cout<<"1/z ="<<x<<endl;
}