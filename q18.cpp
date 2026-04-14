#include <iostream>
using namespace std;
int main() {

    int choice, months;
    float total;

    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice >=1 && choice <=3) {

        cout << "Enter number of months: ";
        cin >> months;

        if(choice == 1)
            total = months * 40;

        else if(choice == 2)
            total = months * 20;

        else
            total = months * 30;

        cout << "Total amount = Rs " << total;
    }

    return 0;
}
