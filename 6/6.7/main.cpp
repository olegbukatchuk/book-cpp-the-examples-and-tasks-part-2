#include <iostream>

using namespace std;

union nums {
    unsigned short int n;
    short int m;
};

void show(nums a) {
    cout<<"n = "<<a.n<<endl;
}