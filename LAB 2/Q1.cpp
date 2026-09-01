#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, digits = 0;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    for (int temp = num; temp != 0; temp /= 10) {
        digits++;
    }

    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
    }

    if (sum == originalNum
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
