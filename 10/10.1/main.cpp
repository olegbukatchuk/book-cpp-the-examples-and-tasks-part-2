#include <iostream>
using namespace std;

class MComp {
public:
    double Re;
    double Im;
};

MComp operator+(MComp x,MComp y) {
    MComp z;
    z.Re=x.Re+y.Re;
    z.Im=x.Im+y.Im;

    return z;
}

int main() {
    MComp a,b,c;
    a.Re=1;
    a.Im=2;
    b.Re=2;
    b.Im=3;
    c=a+b;
    cout<<"c.Re = "<<c.Re<<"\n";
    cout<<"c.Im = "<<c.Im<<"\n";

    return 0;
}