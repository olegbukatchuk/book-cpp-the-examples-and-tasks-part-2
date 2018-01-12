#include <iostream>

using namespace std;

void showX(int x=0) {
    cout<<"x = "<<x<<endl;
}

void showXYZ(int x,int y=1,int z=2);

int main() {
    showX(3);
    showX();
    showXYZ(4,5,6);
    showXYZ(7,8);
    showXYZ(9);
    return 0;
}

void showXYZ(int x,int y,int z) {
    cout<<"x = "<<x<<" ";
    cout<<"y = "<<y<<" ";
    cout<<"z = "<<z<<endl;
}