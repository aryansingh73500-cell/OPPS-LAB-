#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 elements for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nUpper Triangle of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j >= i)
                cout << matrix[i][j] << "\t";
            else
                cout << 0 << "\t";
        }
        cout << endl;
    }

    return 0;
}
