#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int digits[20];
    int n;
    cin >> n;
    int cnt = 0;

    while (1) {
        if (n < 2) {
            digits[cnt++] = n;
            break;
        }
        digits[cnt++] = n % 2;
        n /= 2;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}