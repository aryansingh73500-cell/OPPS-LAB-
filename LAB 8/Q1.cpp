#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int rollno;
    vector<string> subjects;
    vector<float> marks;
    float cgpa;
};

int main() {
    Student s;
    int numSubjects;

    cout << "Enter student name: ";
    getline(cin, s.name);
    
    cout << "Enter roll number: ";
    cin >> s.rollno;
    
    cout << "Enter CGPA: ";
    cin >> s.cgpa;
    
    cout << "Enter number of subjects enrolled: ";
    cin >> numSubjects;
    
    for (int i = 0; i < numSubjects; i++) {
        string sub;
        float mark;
        
        cout << "Enter name of subject " << i + 1 << ": ";
        cin >> ws; // Clear leading whitespace left by previous cin
        getline(cin, sub);
        
        cout << "Enter marks for " << sub << ": ";
        cin >> mark;
        
        s.subjects.push_back(sub);
        s.marks.push_back(mark);
    }

    cout << "\n================================\n";
    cout << "       STUDENT INFORMATION        \n";
    cout << "================================\n";
    cout << "Name: " << s.name << "\n";
    cout << "Roll No: " << s.rollno << "\n";
    cout << "CGPA: " << s.cgpa << "\n";
    cout << "--------------------------------\n";
    cout << "Subjects & Marks:\n";
    for (int i = 0; i < numSubjects; i++) {
        cout << "- " << s.subjects[i] << ": " << s.marks[i] << "\n";
    }

    return 0;
}
