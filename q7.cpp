#include <iostream>
using namespace std;
int main() {

    float r1, r2, r3;

    cout << "Enter time of Runner 1: ";
    cin >> r1;

    cout << "Enter time of Runner 2: ";
    cin >> r2;

    cout << "Enter time of Runner 3: ";
    cin >> r3;

    if(r1 < r2 && r1 < r3)
        cout << "Runner 1 is First";

    else if(r2 < r1 && r2 < r3)
        cout << "Runner 2 is First";

    else
        cout << "Runner 3 is First";

    return 0;
}
