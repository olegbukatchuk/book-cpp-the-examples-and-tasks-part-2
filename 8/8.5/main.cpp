#include <iostream>
using namespace std;

class MyClass {
public:
    int m;
    double n;

    MyClass(int x, double y) {
        m=x;
        n=y;
    }

    void show(bool arg) {
        if (arg) cout<<"m = "<<m<<endl;
        else cout<<"n = "<<n<<endl;
    }
} a(1,2.5),b(3,4.8);

int main() {
    
}