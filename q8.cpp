#include <iostream>
using namespace std;
int main() {

    int choice;
    float radius, length, width, base, height, area;

    cout << "Geometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";

    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter radius: ";
        cin >> radius;

        area = 3.14159 * radius * radius;
        cout << "Area = " << area;
    }

    else if(choice == 2) {
        cout << "Enter length and width: ";
        cin >> length >> width;

        area = length * width;
        cout << "Area = " << area;
    }

    else if(choice == 3) {
        cout << "Enter base and height: ";
        cin >> base >> height;

        area = base * height * 0.5;
        cout << "Area = " << area;
    }

    return 0;
}
