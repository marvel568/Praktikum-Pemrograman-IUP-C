#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    double grosssalary, installment, insurance, netSalary;
    double tax;


    cout << "Insert name: ";
    getline(cin, name);  
    cout << "Insert gross salary: ";
    cin >> grosssalary;
    cout << "Insert installment: ";
    cin >> installment;
    cout << "Insert insurance: ";
    cin >> insurance;

    tax = grosssalary*0.2;
    netSalary = grosssalary-tax-installment-insurance;

    cout << left << setw(25) << "name"
                 << setw(25) << "gross salary"
                 << setw(25) << "tax"
                 << setw(25) << "installment"
                 << setw(25) << "insurance"
                 << setw(25) << "net Salary" <<endl;
    
    cout << setfill('-') << setw(75) << "-" << setfill(' ') << endl;
    
    cout << left << setw(25) << name
                 << setw(25) << grosssalary
                 << setw(25) << tax
                 << setw(25) << installment
                 << setw(25) << insurance
                 << setw(25) << netSalary <<endl;


return 0;

    


    
     


}
