#include <iostream>
using namespace std;

class SimpleClass {
public:
    static int m;
    int n;
    void show();
    static void msum(int k);
} obj1,obj2;

int SimpleClass::m;

int main() {
    SimpleClass::msum(10);
    obj1.n=1;
    obj2.n=2;
    obj1.show();
    obj2.show();
    obj1.msum(90);
    obj2.show();
    return 0;
}

void SimpleClass::show() {
    cout<<"Static field m = "<<m<<endl;
    cout<<"Nonstatic field n = "<<n<<endl;
}

void SimpleClass::msum(int k) {
    m+=k;
}
