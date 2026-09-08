#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
    int first;
    int second;

public:
    // Default Constructor: Initializes default state
    Fibonacci() {
        n = 0;
        first = 0;
        second = 1;
    }

    // Function to get the number of terms from the user
    void input() {
        cout << "Enter the number of terms (n): ";
        cin >> n;
    }

    // Function to generate and print the Fibonacci series
    void generate() {
        if (n <= 0) {
            cout << "Please enter a positive integer." << endl;
            return;
        }

        cout << "Fibonacci Series (" << n << " terms): ";

        int a = first;
        int b = second;

        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            int nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        cout << endl;
    }
};

int main() {
    // Creating object triggers the Default Constructor
    Fibonacci fib;

    // Read user input and generate the series
    fib.input();
    fib.generate();

    return 0;
}
