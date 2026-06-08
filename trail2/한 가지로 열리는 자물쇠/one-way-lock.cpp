#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++) {
            for (int k = 1; k <= n; k++) {
                int abs1 = abs(a - i);
                int abs2 = abs(b - j);
                int abs3 = abs(c - k);
                if (abs1 <= 2 || abs2 <= 2 || abs3 <= 2) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}