#include <iostream>
using namespace std;
int main() {

    float balance, fees = 10;
    int checks;

    cout << "Enter beginning balance: ";
    cin >> balance;

    cout << "Enter number of checks written: ";
    cin >> checks;

    if(balance < 400)
        fees += 15;

    if(checks < 20)
        fees += checks * 0.10;

    else if(checks <= 39)
        fees += checks * 0.08;

    else if(checks <= 59)
        fees += checks * 0.06;

    else
        fees += checks * 0.04;

    cout << "Bank service fees = $" << fees;

    return 0;
}
