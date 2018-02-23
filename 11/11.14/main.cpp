#include <iostream>
#include <cmath>

using namespace std;

class ComplAlg {
protected:
    double x,y;
public:
    void set(double x,double y) {
        this->x=x;
        this->y=y;
    }

    virtual void show() {
        cout<<"alg: z=";

        if(y==0) {
            cout<<x<<endl;
            return;
        }

        if(x!=0)
            cout<<x;

        if(x!=0&&y>0)
            cout<<"+";

        if(y!=1&&y!=-1)
            cout<<y;

        if(y==-1)
            cout<<"-";
        cout<<"i\n";
    }

    ComplAlg() {
        x=0;
        y=0;
    }

    ComplAlg(double x,double y) {
        this->x=x;
        this->y=y;
    }
}z1,z2(2,-1);

class Compl:public ComplAlg {
protected:
    double r,phi;
public:

    void set(double x,double y) {
        ComplAlg::set(x,y);
        r=sqrt(x*x+y*y);
        phi=atan2(y,x);
    }

    void show() {
        ComplAlg::show();
        cout<<"trig: z=";

        if(phi==0) {
            cout<<r<<"\n";
            return;
        }

        if(r!=1)
            cout<<r;
        cout<<"exp(";

        if(phi!=1&&phi!=-1)
            cout<<phi;

        if(phi==-1)
            cout<<"-";
        cout<<"i)\n";
    }

    Compl():ComplAlg() {
        r=0;
        phi=0;
    }

    Compl(double x,double y):ComplAlg(x,y) {
        r=sqrt(x*x+y*y);
        phi=atan2(y,x);
    }
}z3,z4(cos(1),-sin(1));

int main() {
    z1.show();
    z1.set(3,4);
    z1.show();
    z2.show();
    z3.set(-1,0);
    z3.show();
    z4.show();

    return 0;
}