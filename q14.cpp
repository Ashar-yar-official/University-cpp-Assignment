#include <iostream>
using namespace std;
int main() {

    int month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year (two digits): ";
    cin >> year;

    if(month * day == year)
        cout << "The date is MAGIC";
    else
        cout << "The date is NOT MAGIC";

    return 0;
}
