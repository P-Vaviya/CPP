#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Circle myCircle;
    Square mySquare;

    myCircle.display(); // Inherited from Shape
    myCircle.draw();

    mySquare.display(); // Inherited from Shape
    mySquare.draw();

    return 0;
}