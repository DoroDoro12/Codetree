#include <iostream>

using namespace std;

int Sequence(int n) {
    if (n == 1) return 0;
    if (n % 2 == 0) return Sequence(n / 2) + 1;
    else return Sequence(3*n + 1) + 1;
}

int n;

int main() {
    cin >> n;
    cout << Sequence(n);
    // Please write your code here.

    return 0;
}