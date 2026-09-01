#include <iostream>
using namespace std;

int main() {
    int num, i = 0;
    int binaryArr[32];   

    cout << "Enter a number: ";
    cin >> num;

    int original = num;

    if (num == 0) {
        binaryArr[i++] = 0;
    }

    while (num > 0) {
        binaryArr[i] = num % 2;   
        num = num / 2;
        i++;
    }

    cout << "Binary equivalent of " << original << " = ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryArr[j];
    }
    cout << endl;

    return 0;
}
