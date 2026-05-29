#include <iostream>

using namespace std;

int Factorial(int n) {
    if (n == 0) return 1;
    return Factorial(n-1) * n;
}

int N;

int main() {
    cin >> N;
    cout << Factorial(N);
    // Please write your code here.

    return 0;
}