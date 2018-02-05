#include <iostream>
using namespace std;

class MyClass {
public:
    double x;
};

int main() {
    MyClass obj;
    MyClass &ref=obj;
    obj.x=10;
    cout<<"x = "<<ref.x<<endl;

    ref.x=100;
    cout<<"x = "
}