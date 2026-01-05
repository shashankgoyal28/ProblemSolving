// Runtime Polymorphism (Function Overriding using Virtual Functions)
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "C++ programming\n";
    }

    virtual void show() {
        cout << "In Base\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "In Derived\n";
    }
};

int main() {
    Base *bp;
    Base b;
    Derived d;

    bp = &d;     // base pointer to derived object
    bp->show();  // calls Derived's show() (runtime polymorphism)

    bp = &b;     // base pointer to base object
    bp->show();  // calls Base's show()

    return 0;
}