#include <iostream>
using namespace std;
int main() {

    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if(num2 != 0)
        cout << "Division = " << num1 / num2;

    else
        cout << "Division by zero is not possible";

    return 0;
}
