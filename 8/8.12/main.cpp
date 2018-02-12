#include <iostream>
using namespace std;

class MyClass {
    double x;
public:
    MyClass(double z) {x=z;}
    friend void show(MyClass obj);
};

void show(MyClass obj) {
    cout<<"x = "<<obj.x<<endl;
}

int main() {
    MyClass a(10);

    show(a);

    return 0;
}