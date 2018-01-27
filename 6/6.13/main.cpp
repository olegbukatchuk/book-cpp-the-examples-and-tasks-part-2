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

void show(Compl z) {
    cout<<z.Re;

    if(z.Im>=0) cout<<" + "<<z.Im<<"i\n";
    else cout<<" - "<<-z.Im<<"i\n";
}

int main() {
    Compl A,B;

    A.Re=1;
    A.Im=-2;
    B=ComplExp(A);

    show(A);
    show(B);

    return 0;
}