#include <iostream>
#include <numeric>
using namespace std;


int main(){

    int num1;
    int num2;
    cout<<"enter first number: "<<endl;
    cin>>num1;
    cout<<"enter second number: "<<endl;
    cin>>num2;

    int divisor = gcd(num1,num2);
    cout<<"gcd is: "<<divisor<<endl;
    return 0;
}