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

MComp operator-(MComp x,MComp y) {
    MComp z;
    z.Re=x.Re-y.Re;
    z.Im=x.Im-y.Im;
    return z;
}

MComp operator+(double x, MComp y) {
    MComp z;
    z.Re=x+y.Re;
    z.Im=y.Im;
    return z;
}

MComp operator+(MComp y, double x) {
    MComp z;
    z.Re=x+y.Re;
    z.Im=y.Im;
    return z;
}

MComp operator-(double x,MComp y) {
    MComp z;
    z.Re=x-y.Re;
    z.Im=-y.Im;
    return z;
}

MComp operator-(MComp y,double x) {
    MComp z;
    z.Re=y.Re-x;
    z.Im=y.Im;
    return z;
}

MComp operator++(MComp &x) {
    x.Re++;
    return x;
}

MComp operator++(MComp &x,int unused) {
    x.Im++;
    return x;
}

MComp operator--(MComp &x) {
    x.Re--;
    return x;
}

MComp operator--(MComp &x,int unused) {
    x.Im--;
    return x;
}

MComp operator!(MComp &x) {
    x.Im*=-1;
    return x;
}

int main() {
    MComp a,b,c;
    double x=1.5,y=2.5;
    a.Re=1;
    a.Im=2;
    b.Re=2;
    b.Im=3;
    
}

