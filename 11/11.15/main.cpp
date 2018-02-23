#include <iostream>

using namespace std;

class Compl1 {
public:
    double Re,Im;

    Compl1 operator+(Compl1 obj) {
        Compl1 tmp;
        tmp.Re=Re+obj.Re;
        tmp.Im=Im+obj.Im;
        return tmp;
    }

    Compl1(double x,double y) {
        Re=x;
        Im=y;
    }

    Compl1() {
        Re=0;
        Im=0;
    }
}a1(1,2),a2,a3(3,4);

class Compl2:public Compl1 {
public:

    Compl2 operator*(Compl2 obj) {
        Compl2 tmp;
        tmp.Re=Re*obj.Re-Im*obj.Im;
        tmp.Im=Re*obj.Im+Im*obj.Re;
        return tmp;
    }

    Compl2(double x,double y):Compl1(x,y){}
    Compl2():Compl1(){}
}b1(10,20),b2(30,40),b3;

Compl2 operator-(Compl1 x,Compl1 y) {
    Compl2 tmp;
    tmp.Re=x.Re-y.Re;
    tmp.Im=x.Im-y.Im;
    return tmp;
}

void show(Compl1 obj) {
    cout<<"Re: "<<obj.Re<<endl;
    cout<<"Im: "<<obj.Im<<endl;
}

int main() {
    a2=a1+b1;
    show(a2);
    a2=b1+a1;
    show(a2);
    a2=b1+b2;
    show(a2);
    b3=b1*b2;
    show(b3);
    a2=a1-a3;
    show(a2);
    b3=b1-b2;
    show(b3);

    return 0;
}