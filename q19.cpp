#include <iostream>
using namespace std;
int main() {

    int package;
    float gb, bill;

    cout << "Enter package (1,2,3): ";
    cin >> package;

    cout << "Enter GB used: ";
    cin >> gb;

    if(package == 1) {

        bill = 39.99;
        if(gb > 4)
            bill += (gb - 4) * 10;

    }

    else if(package == 2) {

        bill = 59.99;
        if(gb > 8)
            bill += (gb - 8) * 5;

    }

    else if(package == 3) {

        bill = 69.99;

    }

    cout << "Total bill = $" << bill;

    return 0;
}
