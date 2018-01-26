#include <iostream>
using namespace std;

int Count=0;

struct BinTree {
    BinTree *p1;
    BinTree *p2;

    int n;
};

BinTree *MakeTree(int N) {
    BinTree *p;
    p=new BinTree;

    Count++;
    p->n=Count;

    if (N>1) {
        p->p1=MakeTree(N-1);
        p->p2=MakeTree(N-1);
    }
    return p;
}

int main() {
    
}