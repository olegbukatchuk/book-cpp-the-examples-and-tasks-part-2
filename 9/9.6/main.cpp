#include <iostream>
using namespace std;

class Demo {
    int n;
public:
    Demo(int m) {
        n=m;
        cout<<"Constructor: "<<this<<endl;
    }

    void setn(int m) {
        n=m;
    }

    void getn() {
        cout<<"n = "<<n<<endl;
        cout<<"Object: "<<this<<endl;
    }

    ~Demo() {
        cout<<"Destructor: "<<this<<endl;
    }
};

int main() {
    
}