#include <iostream>
using namespace std;

void Circle_Area() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << (3.14) * radius * radius <<endl;
}

void Rectangle_Area() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << length * width <<endl;
}

void Triangle_Area() {
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << (0.5) * base * height <<endl;
}

void Square_Area() {
    double side;
    cout << "Enter side of the square: ";
    cin >> side;
    cout << "Area of Square: " << side * side <<endl;
}

int main() {
    int choice = 0;
    
    while (choice != 5) {
        cout << "Choose a shape to calculate area:\n";
        cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                Circle_Area();
                break;
            case 2:
                Rectangle_Area();
                break;
            case 3:
                Triangle_Area();
                break;
            case 4:
                Square_Area();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    }

    return 0;
}