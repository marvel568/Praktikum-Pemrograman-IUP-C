#include <iostream>
#include <string>

using namespace std;

struct Students {

    string name;
    string nim;
    string studentnumber;
    int UTS;
    int UAS;
    int average;
    
};

int main() {
    
    const int MAX_STUDENTS = 50; 
    Students students[MAX_STUDENTS];
    int choice;
    
    for (int i = 0; i < 50; i++){

    cout << "enter student data" << i+1 << endl;
    cout << "enter students full name use _ for spaces:"; 
    cin >> students[i].name; 
    cout << "enter students NIM:";  
    cin >> students[i].nim; 
    cout << "enter UTS mark:";  
    cin >> students[i].UTS;  
    cout << "enter UAS mark:";
    cin >> students[i].UAS;
    
    students[i].average =(students[i].UTS+students[i].UAS)/2;
    cout << "average is:" << students[i].average << endl;
       
    {cout << "enter 1 if you wish to add another student enter 0 if you want to exit:";
    cin >> choice;
while (choice==1 , i>50)
{
    cout << "program terminated";
}
    }while (choice==0)
{
    cout << "program terminated"; return 0;
}

}
}