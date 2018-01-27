#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
    double z;
};

double dist(Point A,Point B) {
    double s;

    s=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2)+pow(A.z-B.z,2));

    return s;
}

int main() {
    
}