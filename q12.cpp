#include <iostream>
using namespace std;
int main() {

    float income;
    int years;

    cout << "Enter annual income: ";
    cin >> income;

    cout << "Enter years at current job: ";
    cin >> years;

    if(income >= 35000 && years > 5)
        cout << "You qualify for the special loan";
    else
        cout << "You do NOT qualify for the loan";

    return 0;
}
