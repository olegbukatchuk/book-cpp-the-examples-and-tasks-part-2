#include <iostream>
#include <cmath>
using namespace std;

struct Line {
    double a;
    double b;
    double c;
};

void cross(Line A,Line B) {
    double x0,y0;

    if(A.a*B.b==A.b*B.a) {
        if(A.a*B.c!=A.c*B.a) cout<<"Parallel lines!\n";
        else cout<<"Lines coincide!\n";
    } else {
        x0=(A.b*B.c-B.b*A.c)/(A.a*B.b-A.b*B.a);
        y0=(A.a*B.c-A.c*B.a)/(A.b*B.a-B.b*A.a);
        cout<<"x0 = "<<x0<<" y0 = "<<y0<<endl;
    }
}
