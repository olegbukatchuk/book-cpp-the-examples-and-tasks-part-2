#include <iostream>
#include <cstdlib>
using namespace std;

class Bernoulli {
public:
    double p;

    int test() {
        int N=1000;
        int xi;
        xi=rand()%N;

        if(xi<p*N) return 1;
        else return 0;
    }

    int test(int n) {
        int s=0,i;

        for(i=1;i<=n;i++) s+=test();
        return s;
    }
};

int main() {
    int i;
    Bernoulli obj;
    obj.p=0.3;

    for()
}