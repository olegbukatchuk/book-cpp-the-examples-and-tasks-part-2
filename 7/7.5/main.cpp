#include <iostream>
using namespace std;

class SimpleClass {
    int m;
    int n;
public:
    void show();
    void setnm(int i,int j);
};

int main() {
    SimpleClass obj;
    obj.setnm(1,2);
    obj.show();
    return 0;
}

void SimpleClass::show() {
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
}

void SimpleClass::setnm(int i,int j) {
    m=i;
    n=j;
}