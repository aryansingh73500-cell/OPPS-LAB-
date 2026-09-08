#include <iostream>
using namespace std;

// ==========================================
// 1. CLASS FOR COMPLEX NUMBERS
// ==========================================
class Complex {
private:
    float real;
    float imag;

public:
    // Default Constructor
    Complex() : real(0), imag(0) {}

    // Parameterized Constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Function to input complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to add two complex numbers
    Complex add(const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display complex number
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

// ==========================================
// 2. CLASS FOR TIME
// ==========================================
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default Constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized Constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

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
    Time add(const Time& t) const {
        Time temp;
        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + (temp.seconds / 60);
        temp.seconds %= 60;

        temp.hours = hours + t.hours + (temp.minutes / 60);
        temp.minutes %= 60;

        return temp;
    }

    // Function to display time
    void display() const {
        cout << hours << " hrs : " << minutes << " mins : " << seconds << " secs" << endl;
    }
};

// ==========================================
// 3. MAIN FUNCTION
// ==========================================
int main() {
    // --- PART 1: COMPLEX NUMBERS ADDITION ---
    cout << "=== COMPLEX NUMBER ADDITION ===" << endl;
    Complex c1, c2, sumComplex;

    cout << "\n[Complex Number 1]" << endl;
    c1.input();

    cout << "\n[Complex Number 2]" << endl;
    c2.input();

    sumComplex = c1.add(c2);

    cout << "\nResult:" << endl;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "Sum = "; sumComplex.display();

    cout << "\n-----------------------------------" << endl;

    // --- PART 2: TIME ADDITION ---
    cout << "=== TIME ADDITION ===" << endl;
    Time t1, t2, sumTime;

    cout << "\n[Time 1]" << endl;
    t1.input();

    cout << "\n[Time 2]" << endl;
    t2.input();

    sumTime = t1.add(t2);

    cout << "\nResult:" << endl;
    cout << "t1 = "; t1.display();
    cout << "t2 = "; t2.display();
    cout << "Total Time = "; sumTime.display();

    return 0;
}
