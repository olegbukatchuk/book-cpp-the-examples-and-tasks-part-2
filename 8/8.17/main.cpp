#include <iostream>
using namespace std;

class Numbers {
public:
    int n;
    Numbers *p;
};

Numbers *make(int N) {
    Numbers *p1,*p2;
    int i;
    p1=new Numbers;
    p1->n=1;
    p1->p=NULL;

    for(i=2;i<=N;i++) {
        p2=new Numbers;
        p2->n=i;
        p2->p=p1;
        p1=p2;
    }

    return p1;
}

