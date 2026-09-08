#include <iostream>
using namespace std;

// Forward declaration of class
class ArraySum;

// Declaration of the friend function taking an object pointer as parameter
int calculateSum(const ArraySum* ptr);

class ArraySum {
private:
    int* arr;
    int size;

public:
    // Parameterized Constructor: Dynamically allocates memory and inputs array elements
    ArraySum(int n) {
        size = n;
        arr = new int[size];

        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Destructor to deallocate memory
    ~ArraySum() {
        delete[] arr;
    }

    // Friend function declaration
    friend int calculateSum(const ArraySum* ptr);
};

// Friend Function Definition
// Accepts an Object Pointer (const ArraySum* ptr)
int calculateSum(const ArraySum* ptr) {
    int sum = 0;
    
    // Accessing private members (arr and size) via the object pointer
    for (int i = 0; i < ptr->size; i++) {
        sum += ptr->arr[i]; // Arrow operator (->) used with pointer
    }
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    // 1. CONSTRUCTOR: Object creation triggers the parameterized constructor
    ArraySum obj(n);

    // 2. OBJECT POINTER: Create a pointer pointing to 'obj'
    ArraySum* ptr = &obj;

    // 3. FRIEND FUNCTION: Pass the object pointer to calculate the sum
    int totalSum = calculateSum(ptr);

    cout << "\n----------------------------------------" << endl;
    cout << "Sum of all array elements = " << totalSum << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
