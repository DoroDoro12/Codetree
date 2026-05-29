#include <iostream>

using namespace std;
int Power(int a, int b) {
    int base = a;
    for (int i = 1; i < b; i++) {
        a *= base;
    }

    return a;
}

int a, b;

int main() {
    cin >> a >> b;
    cout << Power(a, b);
    // Please write your code here.

    return 0;
}