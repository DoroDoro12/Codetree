#include <iostream>
using namespace std;

int main() {
    int w = 13;
    double rate = 0.165;

    cout << fixed;
    cout.precision(6);

    cout << w << " * " << rate << " = " << w * rate;
    return 0;
}