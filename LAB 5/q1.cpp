#include <iostream>
using namespace std;
class Item {
protected: string title;
public:
    Item(string t) : title(t) {}
    void format() { cout << "Title: " << title << endl; }
};
class EBook : public Item {
    double size;
public:
    EBook(string t, double s) : Item(t), size(s) {}
    void show() { format(); cout << "Size: " << size << " MB\n"; }
};
int main() { EBook e("C++ Primer", 5.2); e.show(); }
