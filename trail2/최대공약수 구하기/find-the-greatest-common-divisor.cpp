#include <iostream>

using namespace std;
void Gcd(int n, int m) {
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }

    cout << n;
}

int n, m;

int main() {
    cin >> n >> m;
    Gcd(n, m);
    // Please write your code here.

    return 0;
}