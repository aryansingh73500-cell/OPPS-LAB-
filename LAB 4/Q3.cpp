#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
    void getData() {
        cout << "Enter 9 elements for the 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
    }
    friend Matrix addMatrix(Matrix m1, Matrix m2);
};
Matrix addMatrix(Matrix m1, Matrix m2) {
    Matrix temp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];

    return temp;
}

int main() {
    Matrix m1, m2, result;

    cout << "Enter first matrix:" << endl;
    m1.getData();

    cout << "Enter second matrix:" << endl;
    m2.getData();

    result = addMatrix(m1, m2);

    cout << "\nFirst matrix:" << endl;
    m1.display();
    cout << "Second matrix:" << endl;
    m2.display();
    cout << "Sum matrix:" << endl;
    result.display();

    return 0;
}
