#include <iostream>
using namespace std;
int main() {

    float sales, commission;

    cout << "Enter sales amount: ";
    cin >> sales;

    if(sales <= 10000)
        commission = sales * 0.10;

    else if(sales <= 15000)
        commission = sales * 0.15;

    else
        commission = sales * 0.20;

    cout << "Commission = " << commission;

    return 0;
}
