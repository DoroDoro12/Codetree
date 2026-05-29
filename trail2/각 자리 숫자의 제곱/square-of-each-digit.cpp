#include <iostream>
using namespace std;

int PlaceSquare(int n) {
    if (n == 0) return 0;
    return PlaceSquare(n/10) + ((n % 10) * (n % 10));
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << PlaceSquare(n);
    return 0;
}