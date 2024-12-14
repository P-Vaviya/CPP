#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

// Base class
class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

// Derived class
class C : public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

// Derived class
class D : public B {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

// Further derived class
class E : public C, public D {
public:
    void displayE() {
        cout << "Class E" << endl;
    }
};

int main() {
    E obj;
    obj.displayA(); // From A
    obj.displayB(); // From B
    obj.displayC(); // From C
    obj.displayD(); // From D
    obj.displayE(); // From E
    return 0;
}