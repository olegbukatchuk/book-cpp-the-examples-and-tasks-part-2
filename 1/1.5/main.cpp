#include <iostream>

using namespace std;

int main() {
    int n,m,i=3,j=3;
    cout<<"At the beginning:\n";
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;

    cout<<"After command n=i++ :\n";
    n=i++;
    cout<<"n = "<<n<<endl;
    cout<<"i = "<<i<<endl;

    cout<<"After command m=++j :\n";
    m=++j;
    cout<<"m = "<<m<<endl;
    cout<<"j = "<<j<<endl;

    cout<<"After command n=(--i)*(i--) :\n";
    n=(--i)*(i--);
    cout<<"n = "<<n<<endl;
    cout<<"i = "<<i<<endl;

    cout<<"After command m=(--j)*(--j) :\n";
    m=(--j)*(--j);
    cout<<"m = "<<m<<endl;
    cout<<"j = "<<j<<endl;

    cout<<"After command n=(--i)*(i++) :\n";
    n=(--i)*(i++);
    cout<<"n = "<<n<<endl;
    cout<<"i = "<<i<<endl;

    cout<<"After command m=(j--)*(++j) :\n";
    m=(j--)*(++j);
    cout<<"m = "<<m<<endl;
    cout<<"j = "<<j<<endl;

    cout<<"After command n=(--i)*(++i) :\n";
    n=(--i)*(++i);
    cout<<"n = "<<n<<endl;
    cout<<"i = "<<i<<endl;

    return 0;
}