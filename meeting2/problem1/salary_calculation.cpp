#include <iostream>
#include <iomanip>
#include <string>
#include <tuple>  
using namespace std;


tuple<string, double, double, double> getTestValues();

int main() {
    string name;
    double grosssalary, installment, insurance;
    
    tie(name, grosssalary, installment, insurance) = getTestValues();

    double tax = grosssalary * 0.2;
    double netSalary = grosssalary - tax - installment - insurance;

    cout << left << setw(25) << "Name"
                 << setw(25) << "Gross Salary"
                 << setw(25) << "Tax"
                 << setw(25) << "Installment"
                 << setw(25) << "Insurance"
                 << setw(25) << "Net Salary" << endl;

    cout << setfill('-') << setw(125) << "-" << setfill(' ') << endl;

    cout << left << setw(25) << name
                 << setw(25) << grosssalary
                 << setw(25) << tax
                 << setw(25) << installment
                 << setw(25) << insurance
                 << setw(25) << netSalary << endl;

    return 0;
}

    


    
     


}
