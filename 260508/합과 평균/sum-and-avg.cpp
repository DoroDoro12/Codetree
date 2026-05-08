#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int total = a + b;
    double average = (double)total/2;

    cout << fixed;
    cout.precision(1);

    cout << total << " " << average;
    return 0;
}