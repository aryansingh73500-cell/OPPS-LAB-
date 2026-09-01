#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string code;
    string designation;
    int experience;
    int age;
    class Salary {
    public:
        double basicPay;

        void getBasicPay() {
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
        }

        void showBasicPay() {
            cout << "Basic Pay: " << basicPay << endl;
        }
    };

    Salary sal; 

public:
    void getData() {
        cin.ignore();  

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Code: ";
        getline(cin, code);

        cout << "Enter Employee Designation: ";
        getline(cin, designation);

        cout << "Enter Years of Experience: ";
        cin >> experience;

        cout << "Enter Age: ";
        cin >> age;

        sal.getBasicPay();   // call nested class function
    }

    void showData() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Age: " << age << endl;
        sal.showBasicPay();   
    }
};

int main() {
    Employee emp;

    emp.getData();
    emp.showData();

    return 0;
}
