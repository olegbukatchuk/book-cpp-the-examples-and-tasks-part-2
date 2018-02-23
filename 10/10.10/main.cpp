#include <iostream>
using namespace std;

class MComp {
public:
    double Re;
    double Im;

    MComp operator=(MComp x) {
        Re=x.Re+1;
        Im=x.Im-1;
        return *this;
    }
};

int main() {
    MComp a,b;
    a.Re=1;
    a.Im=2;
    b=a;
    cout<<"b.Re = "<<b.Re<<"\n";
    cout<<"b.Im = "<<b.Im<<"\n";

    return 0;
}
