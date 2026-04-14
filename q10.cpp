#include <iostream>
using namespace std;
int main() {

    float mass, weight;

    cout << "Enter mass: ";
    cin >> mass;

    weight = mass * 9.8;

    cout << "Weight = " << weight << endl;

    if(weight > 1000)
        cout << "Object is too heavy";

    else if(weight < 10)
        cout << "Object is too light";

    return 0;
}
