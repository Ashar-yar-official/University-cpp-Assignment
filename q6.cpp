#include <iostream>
using namespace std;
int main() {

    int a = 2, b = 4, c = 6;

    cout << "A: " << (a == 4 || b > 2) << endl;
    cout << "B: " << (6 <= c && a < 3) << endl;
    cout << "C: " << (1 != b && c != 3) << endl;
    cout << "D: " << (a >= -1 || a <= b) << endl;
    cout << "E: " << (!(a > 2)) << endl;

    return 0;
}
