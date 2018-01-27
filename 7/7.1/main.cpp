#include <iostream>
using namespace std;

class SimpleClass {
public:
    int number;
};

int main() {
    SimpleClass MyObj;
    MyObj.number=5;
    cout<<"Object field value is "<<MyObj.number<<"\n";

    return 0;
}

