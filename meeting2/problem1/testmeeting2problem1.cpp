#include <tuple>
#include <string>
using namespace std;

tuple<string, double, double, double> getTestValues() {
    string name = "marvel";  
    double grosssalary = 10000;  
    double installment = 2000;   
    double insurance = 1000;     

    return make_tuple(name, grosssalary, installment, insurance);
}
