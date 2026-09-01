#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize values (default 0)
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;   // can access private members directly
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "Enter second complex number:" << endl;
    c2.getData();

    result = addComplex(c1, c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum = ";
    result.display();

    return 0;
}
