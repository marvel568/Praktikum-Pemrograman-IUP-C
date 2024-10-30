#include <iostream>
using namespace std;

long int factorial(int x); 

int main() {
    int x;
    long int result;

    cout << "Enter the factorial value: ";
    cin >> x;

    result = factorial(x); 
    cout << x << "! = " << result << endl; 

    return 0;
}


long int factorial(int x) {
    if (x <= 1) 
        return 1;
    else
        return x * factorial(x - 1); 
}