#include <iostream>
using namespace std;

class MyExp {
    double x;
    double xexp;

    double mexp(double z) {
        double s=1,q=z;

        for(int i=1;i<=100;i++) {
            s+=q;
            q*=z/(i+1);
        }
        return s;
    }

public:

    void set(double z) {
        x=z;
        xexp=mexp(x);
    }

    MyExp(double z) {
        set(z);
    }

    double get() {
        return x;
    }

    double get() {
        return xexp;
    }
};

int main() {
    
}