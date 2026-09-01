#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void getData() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    friend Time addTime(Time t1, Time t2);
};
Time addTime(Time t1, Time t2) {
    Time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours;

    // carry extra minutes into hours
    temp.hours += temp.minutes / 60;
    temp.minutes = temp.minutes % 60;

    return temp;
}

int main() {
    Time t1, t2, result;

    cout << "Enter first time:" << endl;
    t1.getData();

    cout << "Enter second time:" << endl;
    t2.getData();

    result = addTime(t1, t2);

    cout << "\nFirst time: ";
    t1.display();
    cout << "Second time: ";
    t2.display();
    cout << "Sum = ";
    result.display();

    return 0;
}
