#include <iostream>

using namespace std;

main(){
    
    int n;
    int sum;

    cout<<"insert number: "<<endl;
    cin>>n;

    while (n>0){
        sum +=n;
        n--;
    }

    cout<<"sum is: "<<sum<<endl;

    return 0;
    
}