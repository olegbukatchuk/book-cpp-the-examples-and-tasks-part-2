#include <iostream>

using namespace std;

int factorial(int n) {
    if (n==1) return 1;
    else return n*factorial(n-1);
}

int main() {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"n != "<<factorial(n)<<endl;
    return 0;
}