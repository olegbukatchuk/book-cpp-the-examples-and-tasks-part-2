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

