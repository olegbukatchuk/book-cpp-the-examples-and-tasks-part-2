#include <iostream>
using namespace std;

class SimpleClass {
public:
    int m;
    int n;

    int summa() {
        int k=n+m;
        return k;
    }

    void show() {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }

    void mult(int k) {
        n*=k;
        m*=k;
    }
};

int main() {
    
}
