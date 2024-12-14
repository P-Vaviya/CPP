#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Further derived class
class Puppy : public Dog {
public:
    void whine() {
        cout << "Puppy whines." << endl;
    }
};

int main() {
    Puppy myPuppy;
    myPuppy.eat();  // Inherited from Animal
    myPuppy.bark(); // Inherited from Dog
    myPuppy.whine();
    return 0;
}