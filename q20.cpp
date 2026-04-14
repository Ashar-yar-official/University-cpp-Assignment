#include <iostream>
using namespace std;
int main() {

    int seconds;

    cout << "Enter number of seconds: ";
    cin >> seconds;

    if(seconds >= 86400)
        cout << "Days = " << seconds / 86400;

    else if(seconds >= 3600)
        cout << "Hours = " << seconds / 3600;

    else if(seconds >= 60)
        cout << "Minutes = " << seconds / 60;

    else
        cout << "Seconds = " << seconds;

    return 0;
}
