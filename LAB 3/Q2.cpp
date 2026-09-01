#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;   // return the reversed value
}

int main() {
    int num, revNum;

    cout << "Enter a number: ";
    cin >> num;

    revNum = reverseNumber(num);   // function returns reversed value

    cout << "Reversed number = " << revNum << endl;

    return 0;
}
