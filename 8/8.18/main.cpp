#include <iostream>
using namespace std;

class Vector {
public:
    double x,y,z;

    Vector vprod(Vector obj) {
        Vector tmp;

        tmp.x=y*obj.z-obj.y*z;
        tmp.y=z*obj.x-obj.z*x;
        tmp.z=x*obj.y-obj.x*y;

        return tmp;
    }

    void show() {
        cout<<"("<<x<<","<<y<<","<<z<<")\n";
    }
};

int main() {
    Vector a,b,c;

    a.x=1;
}