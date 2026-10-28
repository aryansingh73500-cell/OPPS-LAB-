#include <iostream>
using namespace std;

void reverseSentence() {
    char c;
    cin.get(c);
    if (c != '\n' && c != EOF) {
        reverseSentence(); // Recursive call before printing
        cout << c;         // Print character as stack unwinds
    }
}

int main() {
    cout << "Enter a sentence: ";
    reverseSentence();
    cout << endl;
    return 0;
}
