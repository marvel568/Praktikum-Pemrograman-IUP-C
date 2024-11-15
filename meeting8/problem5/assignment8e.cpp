#include <iostream>
#include <string>
using namespace std;

struct Student {
    long NISN;
    string name;
    string value; 
};

void changeValue(Student students[], int size, const string &targetValue, const string &newValue) {
    for (int i = 0; i < size; i++) {
        if (students[i].value == targetValue) {
            students[i].value = newValue;
        }
    }
}

void displayStudents(const Student students[], int size) {
    cout << "NISN\t\tName\t\t\t\tValue" << endl;
    for (int i = 0; i < size; i++) {
        cout << students[i].NISN << "\t" << students[i].name << "\t\t" << students[i].value << endl;
    }
}

int main() {
    Student students[] = {
        {9960312699, "Handi Ramadhan", "90"},
        {9963959682, "Rio Alfandra", "55"},
        {9950310962, "Ronaldo Valentino Uneputty", "80"},
        {9970272750, "Achmad Yaumil Fadjri R.", "60"},
        {9970293945, "Alivia Rahma Pramesti", "70"},
        {9952328180, "Ari Lutfianto", "65"},
        {9965653989, "Arief Budiman", "60"}
    };

    int size = sizeof(students) / sizeof(students[0]);
    string targetValue = "60";
    string newValue = "Joko";

    changeValue(students, size, targetValue, newValue);

    cout << "List of Students After Changing Value 60 to 'Joko':" << endl;
    displayStudents(students, size);

    return 0;
}