#include <iostream>
using namespace std;

class MyClass {
public:
    int m,n;

    MyClass(int a,int b) {
        m=a;
        n=b;
    }

    void show() {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};

int main() {
    MyClass obj(1,2);
    obj.show();

    return 0;
}
