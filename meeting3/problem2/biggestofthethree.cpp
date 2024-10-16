#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Insert a: ";
    cin >> a;
    cout << "Insert b: ";
    cin >> b;
    cout << "Insert c: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Largest A: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "Largest B: " << b << endl;
    }
    else {
        cout << "Largest C: " << c << endl;
    }

    return 0;
}
