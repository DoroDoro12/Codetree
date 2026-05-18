#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 1; i <= 5000; i++) {
        n /= i;
        cnt++;

        if (n <= 1) {
            break;
        }

    }
    cout << cnt;
    return 0;
}