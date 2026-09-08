#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to input time
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to add two time objects and normalize seconds/minutes
    Time add(const Time& t) {
        Time temp;
        
        // Add seconds and handle carry over
        temp.seconds = seconds + t.seconds;
        int carryMinutes = temp.seconds / 60;
        temp.seconds %= 60;

        // Add minutes with carry over and handle hour carry over
        temp.minutes = minutes + t.minutes + carryMinutes;
        int carryHours = temp.minutes / 60;
        temp.minutes %= 60;

        // Add hours with carry over
        temp.hours = hours + t.hours + carryHours;

        return temp;
    }

    // Function to display time
    void display() const {
        cout << hours << " hrs : " << minutes << " mins : " << seconds << " secs" << endl;
    }
};

int main() {
    Time t1, t2, result;

    cout << "=== TIME 1 ===" << endl;
    t1.input();

    cout << "\n=== TIME 2 ===" << endl;
    t2.input();

    // Perform Addition
    result = t1.add(t2);

    // Display Results
    cout << "\n-----------------------" << endl;
    cout << "Time 1     : "; t1.display();
    cout << "Time 2     : "; t2.display();
    cout << "Total Time : "; result.display();

    return 0;
}
