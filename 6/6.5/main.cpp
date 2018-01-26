#include <iostream>
using namespace std;

struct DList {
    int m;
    DList *p;
};

void getm(int k,DList *q) {
    int i;
    DList *t,*t1;
    t=q;

    for(i=1;i<k;i++) {
        t1=t->p;
        t=t1;
    }
    cout<<"Value is "<<t->m<<endl;
}

int main() {
    int i,n,k;
    DList *q0,*q1,*q2;
    q0=new DList;
    q1=q0;

    cout<<"Value n= ";
    cin>>n;

    for(i=1;i<n;i++) {
        cout<<"Value m= ";
        cin>>q1->m;
        q2=new DList;
        q1->p=q2;
        q1=q2;
    }
    cout<<"Value m= ";
    cin>>q1->m;
    q1->p=q0;

    do {
        cout<<"Value "
    }
}