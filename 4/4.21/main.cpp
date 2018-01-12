#include <iostream>

using namespace std;

void showArgs(double x) {
    cout<<"Double-number "<<x<<endl;
}

void showArgs(double x, double y) {
    cout<<"Double-numbers "<<x<<" and "<<y<<endl;
}

void showArgs(char s) {
    cout<<"Symbol "<<s<<endl;
}

int showArgs(int n) {
    return n;
}

int main() {
    int n=3;
    double x=2.5,y=5.1;
    char s='w';

    showArgs(x);
    showArgs(x,y);
    showArgs(s);
    
    cout<<"Int-number "<<showArgs(n)<<endl;

    return 0;
}