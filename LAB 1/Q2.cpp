#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;   // extract last digit
        sum += digit;       // add it to sum
        num /= 10;          // remove last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
