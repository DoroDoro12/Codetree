#include <iostream>

using namespace std;
void Lcm(int n, int m) {
    int prod = n * m;
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }
    int gcd = n;
    int lcm = prod / gcd;
    cout << lcm;
}

int n, m;

int main() {
    cin >> n >> m;
    Lcm(n, m);
    // Please write your code here.

    return 0;
}