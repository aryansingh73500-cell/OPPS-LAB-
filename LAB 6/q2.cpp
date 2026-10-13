#include <iostream>
using namespace std;
class Account {
protected: double bal;
public: Account(double b) : bal(b) {}
};
class SavingsAccount : public Account {
public:
    SavingsAccount(double b) : Account(b) {}
    void interest() { cout << "Interest: " << bal * 0.04 << endl; }
};
class CheckingAccount : public Account {
public:
    CheckingAccount(double b) : Account(b) {}
    void overdraft() { cout << "Overdraft limit: " << bal * 0.5 << endl; }
};
int main() {
    SavingsAccount s(1000); s.interest();
    CheckingAccount c(2000); c.overdraft();
}
