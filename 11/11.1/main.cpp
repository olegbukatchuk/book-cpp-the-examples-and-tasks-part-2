#include <iostream>
using namespace std;

class A {
private:
    int x;
public:
    int y;
};

class B: public A {
public:
    int z;
    void show() {
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};

int main() {
    B obj;
    obj.y=1;
    obj.z=2;
    obj.show();

    return 0;
}