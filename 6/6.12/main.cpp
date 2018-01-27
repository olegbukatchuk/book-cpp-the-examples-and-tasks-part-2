#include <iostream>
#include <cmath>
using namespace std;

struct ComplAlg {
    double Re;
    double Im;
};

struct ComplTrig {
    double r;
    double phi;
};

ComplAlg sum(ComplAlg zl,ComplAlg z2) {
    ComplAlg z;
    z.Re=z.Re+z2.Re;
    z.Im=z.Im+z2.Im;
    return z;
}

ComplAlg TrigToAlg(ComplTrig z) {
    ComplAlg tmp;
    tmp.Re=z.r*cos(z.phi);
    tmp.Im=z.r*sin(z.phi);
    return tmp;
}

void show(ComplAlg z) {
    cout<<z.Re;

    if(z.Im>=0) cout<<" + "<<z.Im<<"i\n";
    else cout<<" - "<<z.Im<<"i\n";
}

int main() {
    const double pi=3.1415;

    ComplAlg A,B,C;
    ComplTrig D;

    A.Re=1;
    A.Im=-1;

    B.Re=4;
    B.Im=5;

    D.r=2;
    D.phi=pi/6;

    C=TrigToAlg(D);

    show(A);
    show(B);
    show(C);

    C=sum(A,B);
    show(C);
    return 0;
}