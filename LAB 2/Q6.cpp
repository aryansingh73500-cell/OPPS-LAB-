#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], copyArr[n], reverseArr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copy array
    for (int i = 0; i < n; i++) {
        copyArr[i] = arr[i];
    }

    // Reverse array
    for (int i = 0; i < n; i++) {
        reverseArr[i] = arr[n - 1 - i];
    }

    // Display original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display copied array
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << copyArr[i] << " ";
    }
    cout << endl;

    // Display reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << reverseArr[i] << " ";
    }
    cout << endl;

    return 0;
}
