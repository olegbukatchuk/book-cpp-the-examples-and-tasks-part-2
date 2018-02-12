#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
    double Re,Im;

    void show() {
        cout<<Re;
        if(Im>0) cout<<"+"<<"i"<<endl;
        if(Im<0) cout<<"-"<<-Im<<"i"<<endl;
    }
};

Complex cExp(Complex z) {
    Complex tmp;
    tmp.Re=exp(z.Re)*cos(z.Im);
    tmp.Im=exp(z.Re)*sin(z.Im);
    return tmp;
}

int main() {
    Complex z;
    cout<<"Re: ";
    cin>>z.Re;
}