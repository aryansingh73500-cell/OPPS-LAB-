#include <iostream>
using namespace std;
class Student { protected: int m1; public: Student(int a) : m1(a) {} };
class Marks : public Student {
protected: int m2;
public: Marks(int a, int b) : Student(a), m2(b) {}
};
class Result : public Marks {
public:
    Result(int a, int b) : Marks(a, b) {}
    void honors() {
        double avg = (m1 + m2) / 2.0;
        cout << (avg >= 85 ? "First Class Honors" : "Pass") << endl;
    }
};
int main() { Result r(90, 85); r.honors(); }
