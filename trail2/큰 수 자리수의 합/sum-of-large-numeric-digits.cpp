#include <iostream>

using namespace std;

int PlaceSum(int n) {
    if (n == 0) return 0;
    return PlaceSum(n/10) + n % 10;
}

int a, b, c;

int main() {
    cin >> a >> b >> c;
    cout << PlaceSum(a * b * c);
    // Please write your code here.

    return 0;
}