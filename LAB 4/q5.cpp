#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
private:
    int number;

public:
    // Parameterized Constructor
    Armstrong(int num) {
        number = num;
    }

    // Copy Constructor
    Armstrong(const Armstrong &obj) {
        number = obj.number;
    }

    // Function to check if the number is an Armstrong number
    bool isArmstrong() {
        int temp = number;
        int originalNumber = number;
        int count = 0;
        int sum = 0;

        // Step 1: Count the number of digits
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        // Step 2: Calculate sum of digits raised to the power of digit count
        temp = originalNumber;
        while (temp > 0) {
            int remainder = temp % 10;
            sum += pow(remainder, count);
            temp /= 10;
        }

        // Step 3: Check condition
        return (sum == originalNumber);
    }

    // Function to display result
    void displayResult() {
        if (isArmstrong()) {
            cout << number << " is an Armstrong number." << endl;
        } else {
            cout << number << " is NOT an Armstrong number." << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Object 1 created using Parameterized Constructor
    Armstrong obj1(num);

    // Object 2 created using Copy Constructor (copies data from obj1)
    Armstrong obj2 = obj1; 

    // Performing check and display using the copied object
    cout << "\n[Checking using Copied Object]" << endl;
    obj2.displayResult();

    return 0;
}
