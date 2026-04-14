#include <iostream>
using namespace std;
int main() {

    float sales;

    cout << "Enter sales amount: ";
    cin >> sales;

    if(sales > 50000) {
        sales = sales + (sales * 0.25) + 250;
    }

    cout << "Total sales after bonus = " << sales;

    return 0;
}
