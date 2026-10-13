#include <iostream>
using namespace std;
class Person {
protected: string name;
public: Person(string n = "") : name(n) {}
};
class Teacher : virtual public Person {
public: void teach() { cout << name << " teaches\n"; }
};
class Student : virtual public Person {
public: void study() { cout << name << " studies\n"; }
};
class TeachingAssistant : public Teacher, public Student {
public:
    TeachingAssistant(string n) : Person(n) {}
    void show() { teach(); study(); }
};
int main() { TeachingAssistant ta("Riya"); ta.show(); }
