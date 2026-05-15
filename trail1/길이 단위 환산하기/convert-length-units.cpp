#include <iostream>
using namespace std;

int main() {
    double ft = 30.48, n;
    cin >> n;

    cout << fixed;
    cout.precision(1);

    cout << n * ft;
    return 0;
}