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
    BinTree *q;
    q=MakeTree(4);

    cout<<"Elements in tree: "<<Count<<endl;

    cout<<q->n<<endl;
    cout<<q->p1->n<<endl;
    cout<<q->p1->p1->p1->n<<endl;
    cout<<q->p1->p2->p1->n<<endl;
    cout<<q->p2->n<<endl;
    cout<<q->p2->p1->n<<endl;
    cout<<q->p2->p2->p2->n<<endl;

    return 0;
}