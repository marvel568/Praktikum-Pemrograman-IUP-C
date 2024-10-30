#include <iostream>
using namespace std;

int function(){
    int input;
    cout<<"type 1 to do addition, type 2 to do subtraction"<<endl;
    cin >> input;
    return input;

}

double addition(){
    
    double a, b;
    double value;

    cout<<"insert a"<<endl;
    cin>>a;
    cout<<"insert b"<<endl;
    cin>>b;
    value=a+b;
    cout<<"answer is: "<<value<<endl;

}
double subtraction(){

    double a,b;
    double value;

    cout<<"insert a"<<endl;
    cin>>a;
    cout<<"insert b"<<endl;
    cin>>b;
    value=a-b;
    cout<<"answer is: "<<value<<endl;
}
int main(){

    int input = function();
    switch (input){
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
    }
    return 0;
}