#include <iostream>

using namespace std;

const int n=2;

template <class X> class MyTree{
public:
    X record;
    MyTree *pnt[n];

    MyTree(int k) {
        int i;

        if(k==1)
            for(i=0;i<n;i++) pnt[i]=NULL;
        else
            for(i=0;i<n;i++) pnt[i]=new MyTree(k-1);
        cout<<"created: "<<this<<endl;

        for(i=0;i<n;i++)
            cout<<i<<": "<<pnt[i]<<endl;
        cout<<endl;
    }

    ~MyTree() {
        int i;

        for(i=0;i<n;i++)
            delete pnt[i];
        cout<<"deleted: "<<this<<endl;
    }
};

int main() {
    MyTree<double> *input;
    input=new MyTree<double>(3);
    input->pnt[1]->record=3.1415;
    cout<<endl;
    cout<<input->pnt[1]<<": record=";
    cout<<(*(*input).pnt[1]).record<<endl;
    cout<<endl;
    delete input;

    return 0;
}