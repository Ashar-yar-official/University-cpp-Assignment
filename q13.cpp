#include <iostream>
using namespace std;
int main() {

    int model;

    cout << "Enter TV model (100 / 200 / 300): ";
    cin >> model;

    if(model == 300)
        cout << "Features: Picture-in-picture, Stereo sound, Remote control";

    else if(model == 200)
        cout << "Features: Stereo sound and Remote control";

    else if(model == 100)
        cout << "Features: Remote control only";

    else
        cout << "Invalid model";

    return 0;
}
