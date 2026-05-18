#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a % 3 == 0 && a % 2 == 1) {
            sum += a;
        }
    }

    cout << sum;
    return 0;
}