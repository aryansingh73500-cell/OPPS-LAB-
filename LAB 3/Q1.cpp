#include <iostream>
using namespace std;

struct Employee {
    string name;
    string code;
    string designation;
    int experience;
    int age;
};

int main() {
    Employee emp;

    cout << "Enter Employee Name: ";
    getline(cin, emp.name);

    cout << "Enter Employee Code: ";
    getline(cin, emp.code);

    cout << "Enter Employee Designation: ";
    getline(cin, emp.designation);

    cout << "Enter Years of Experience: ";
    cin >> emp.experience;

    cout << "Enter Age: ";
    cin >> emp.age;

    cout << "\n----- Employee Details -----" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Code: " << emp.code << endl;
    cout << "Designation: " << emp.designation << endl;
    cout << "Experience: " << emp.experience << " years" << endl;
    cout << "Age: " << emp.age << endl;

    return 0;
}
