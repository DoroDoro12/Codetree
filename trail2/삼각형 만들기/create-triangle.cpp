#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;
int n;
int x[100];
int y[100];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (x[i] != x[j] && x[j] != x[k] && x[k] != x[i]) continue;
                if (y[i] != y[j] && y[j] != y[k] && y[k] != y[i]) continue;
                int x_d, y_d;
                x_d = max(max(abs(x[i] - x[j]), abs(x[j]- x[k])), abs(x[k] - x[i]));
                y_d = max(max(abs(y[i] - y[j]), abs(y[j]- y[k])), abs(y[k] - y[i]));
                ans = max(ans, x_d*y_d);
            }
        }
    }

    cout << ans;
    return 0;
}