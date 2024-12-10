#include <iostream>
using namespace std;

class Area {
public:
    double length, width, radius, side, base, height;

    double rectangle() {
        cout<<"Enter the length and width of the rectangle"<<endl;
        cout<< length * width;
    }

    double circle() {
        cout<<"Enter the radius of the circle"<<endl;
        cout<< (3.14) * radius * radius;
    }


    double square() {
        cout<<"Enter the side of the square"<<endl;
        cout<< side * side;
    }

    double triangle() {
        cout<<"Enter the base and height of the triangle"<<endl;
        cout<< (0.5) * base * height;
    }
};

int main() {
    Area area;
    int choice = 0;
    while (choice != 5) {
        cout << "Choose a shape to calculate area:\n";
        cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                area.circle();
                break;
            case 2:
                area.rectangle();
                break;
            case 3:
                area.triangle();
                break;
            case 4:
                area.square();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    }

    return 0;
}