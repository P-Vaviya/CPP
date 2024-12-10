#include <iostream>
using namespace std;

int main() {
    int choice;

    while(choice!=5)
     {
        cout << "Choose a shape to calculate area:\n";
        cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Area of Circle: " << (3.14) * radius * radius << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of Rectangle: " << length * width << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of Triangle: " << 0.5 * base * height << endl;
                break;
            }
            case 4: {
                double side;
                cout << "Enter side of the square: ";
                cin >> side;
                cout << "Area of Square: " << side * side << endl;
                break;
            }
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}