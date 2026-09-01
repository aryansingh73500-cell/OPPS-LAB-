#include <iostream>
using namespace std;

int main() {
    int num, remainder, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;

    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num != 0);

    cout << "Reversed number = " << reversedNum << endl;

    return 0;
}
