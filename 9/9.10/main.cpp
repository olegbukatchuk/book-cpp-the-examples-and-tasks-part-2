#include <iostream>
using namespace std;

class Inner {
public:
    int n;

    Inener() {
        n=0;
        cout<<"Inner-object created with n="<<n<<endl;
    }

    ~Inner() {
        cout<<"Inner-object destroyed with n="<<n<<endl;
    }
};

