#include <iostream>
using namespace std;

class SimpleClass {
public:
    int number;
};



int main() {
    SimpleClass MyObj1,MyObj2;
    MyObj1.number=5;
    MyObj2.number=++MyObj1.number;
    cout<<"Object field value is "<<MyObj2.number<<"\n";
    return 0;
}