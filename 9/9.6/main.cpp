#include <iostream>
using namespace std;

class Demo {
    int n;
public:
    Demo(int m) {
        n=m;
        cout<<"Constructor: "<<this<<endl;
    }

    void setn(int m) {
        n=m;
    }

    void getn() {
        cout<<"n = "<<n<<endl;
        cout<<"Object: "<<this<<endl;
    }

    ~Demo() {
        cout<<"Destructor: "<<this<<endl;
    }
};

int main() {
    Demo a(1);
    Demo b=Demo(2);

    a.getn();
    b.getn();
    a.setn(-1);
    a.getn();
    a=b;
    a.getn();
    a=Demo(0);
    a.getn();

    return 0;
}