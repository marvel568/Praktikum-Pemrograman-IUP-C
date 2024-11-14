#include <iostream>
#include <vector>

int main(){


    std::vector<int> fizz;
    std::vector<int> buzz;
    std::vector<int> fizzbuzz;
    std::vector<int> norm;
    int i=1;

    while(i<=100){
        if(i%3 == 0){
        fizz.push_back(i);
        }
        if (i%5==0)
        {
        buzz.push_back(i);
        }
        if(i%3==0 && i%5==0)
        {
           fizzbuzz.push_back(i);
        }
        else{
        norm.push_back(i);
        }
        i++;
        }
   
    std::cout<<"normal: "<<std::endl;
    for(int num:norm){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    
    std::cout<<"fizz: "<<std::endl;
    for(int num:fizz){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"buzz: "<<std::endl;
    for(int num:buzz){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"fizzbuzz: "<<std::endl;
    for(int num:fizzbuzz){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    

    return 0;


}