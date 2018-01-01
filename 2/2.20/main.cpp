#include <iostream>

using namespace std;

int main() {
    double x, s;
    char op;

    cout << ">> ";
    cin >> x;
    s = x;

    while (true) {
        cout << ">> ";
        cin >> op;

        if (op == '=') {
            cout << "---> " << s << endl;
            exit(0);
        }

        cout << ">> ";
        cin >> x;

        switch (op) {
            case '+':
                s += x;
                break;
            case '-':
                s -= x;
                break;
            case '*':
                s *= x;
                break;
            case '/':
                s /= x;
        }
    }
    return 0;
}