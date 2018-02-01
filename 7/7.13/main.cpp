#include <iostream>
#include <cmath>
using namespace std;

const double g=9.8;
const double pi=3.1415;

class Body {
    double T() {
        return 2*V0*sin(alpha)/g;
    }

public:
    double V0;
    double alpha;

    double x(double t) {
        if(t<=T()) return V0*cos(alpha)*t;
        else return V0*cos(alpha)*T();
    }

    
};