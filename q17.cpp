#include <iostream>
using namespace std;
int main() {

    int choice;

    cout << "Select Headphone Type\n";
    cout << "1. Noise Canceling\n";
    cout << "2. Wireless\n";
    cout << "3. Wired Budget\n";

    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        cout << "Price: $249.00";

    else if(choice == 2)
        cout << "Price: $199.00";

    else if(choice == 3)
        cout << "Price: $49.00";

    else
        cout << "Invalid choice";

    return 0;
}
