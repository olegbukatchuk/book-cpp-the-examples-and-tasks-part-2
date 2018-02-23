#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    int y;

    void set(int i) {
        x=i;
    }
};

class B: private A {
public:
    int z;

    A::y;
    A::set;

    void show() {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};

int main() {
    B obj;
    obj.set(0);
    obj.y=1;
    obj.z=2;
    obj.show();

    return 0;
}