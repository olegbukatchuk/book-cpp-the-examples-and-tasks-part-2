#include <iostream>
#include <cmath>
using namespace std;

struct Compl {
    double Re;
    double Im;
};

Compl ComplExp(Compl z) {
    Compl tmp;

    tmp.Re=exp(z.Re)*cos(z.Im);
    tmp.Im=exp(z.Re)*sin(z.Im);

    return tmp;
}

