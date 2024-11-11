#include <iostream>

using namespace std;

int main() {  

    int n;
    int m = 1; 

    cout << "Enter the value you want to multiply with: " << endl;
    cin >> n;

    while (m <= 10) {  
        int eq = n * m;  
        cout << n << " * " << m << " = " << eq << endl;
        m++; }

    return 0;  
}