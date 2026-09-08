#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double gpa;

public:
    // 1. DEFAULT CONSTRUCTOR
    // Executed when an object is created without parameters
    Student() {
        name = "Unassigned";
        rollNumber = 0;
        gpa = 0.0;
        cout << "[Default Constructor Called]" << endl;
    }

    // 2. PARAMETERIZED CONSTRUCTOR
    // Executed when arguments are passed during object creation
    Student(string sName, int sRoll, double sGpa) {
        name = sName;
        rollNumber = sRoll;
        gpa = sGpa;
        cout << "[Parameterized Constructor Called]" << endl;
    }

    // 3. COPY CONSTRUCTOR
    // Executed when an object is initialized using another existing object
    Student(const Student &obj) {
        name = obj.name;
        rollNumber = obj.rollNumber;
        gpa = obj.gpa;
        cout << "[Copy Constructor Called]" << endl;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name 
             << " | Roll No: " << rollNumber 
             << " | GPA: " << gpa << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    cout << "=== CONSTRUCTOR OVERLOADING DEMO ===\n" << endl;

    // Call 1: Default Constructor
    Student s1;
    cout << "s1 Details: ";
    s1.display();

    // Call 2: Parameterized Constructor
    Student s2("Alice", 101, 3.9);
    cout << "s2 Details: ";
    s2.display();

    // Call 3: Copy Constructor
    Student s3(s2); // Copies s2 into s3
    cout << "s3 Details (Copied from s2): ";
    s3.display();

    return 0;
}
