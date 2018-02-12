#include <iostream>
using namespace std;

class MyClass {
public:
    double x;
};

double f1(MyClass obj) {
    obj.x*=10;
    return obj.x;
}

double f2(MyClass &obj) {
    obj.x*=10;
    return obj.x;
}

int main() {
    MyClass obj;
    obj.x=5;

}