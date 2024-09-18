#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double d;
    cout << "insert a:";
    cin  >> a;
    cout << "insert b:";
    cin  >> b;
    cout << "insert c:";
    cin  >> c;
    if (a==0){
        cout << "a cannot be 0 " << endl;
        return 1;
    }
    d=(b*b)-(4*a*c);
    if (d<0)
    {
        cout << "no real solution" << endl;
    }
    if (d==0)
    {
        cout << "1 real solution" << -b/(2*a) << endl;
    }
    if (d>0)
    {
        cout << "2 real solutions" << -b+sqrt(d)/2*a << "and" << -b-sqrt(d)/2*a <<endl;
    }
    return 0;
    

}