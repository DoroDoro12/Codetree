#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int a[10];
int b[10];
int res;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 1; i <= 10000; i++) {
        int t_res = i;
        int tmp = i * 2;
        bool val = true;

        for (int j = 0; j < n; j++) {
            if (tmp < a[j] || tmp > b[j]) {
                val = false;
                break;
            } tmp *= 2;
        }
        if (val) {
            res = t_res;
            break;
        }
    }
    cout << res;
    return 0;
}