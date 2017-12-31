#include <iostream>

using namespace std;

int main() {
    double a,b;
    bool state;

    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"x is: ";

    state=(a!=0);
    state?(cout<<b/a<<endl,exit(0)):state=(a==0)&&(b==0);
    cout<<(state?"any number!":"no result!")<<endl;

    return 0;
}