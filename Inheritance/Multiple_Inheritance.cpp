#include <iostream>
using namespace std;

// Base class 1
class Printer {
public:
    void print() {
        cout << "Printing document." << endl;
    }
};

// Base class 2
class Scanner {
public:
    void scan() {
        cout << "Scanning document." << endl;
    }
};

// Derived class
class MultiFunctionPrinter : public Printer, public Scanner {
public:
    void copy() {
        cout << "Copying document." << endl;
    }
};

int main() {
    MultiFunctionPrinter mfp;
    mfp.print(); // From Printer
    mfp.scan();  // From Scanner
    mfp.copy();  // From MultiFunctionPrinter
    return 0;
}