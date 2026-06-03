#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int a[2000001] = {};
    int b[2000001] = {};

    int a_t = 1, b_t = 1;
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        if (d == 'R') {
            while (t--) {
                a[a_t] = a[a_t-1] + 1;
                a_t++;
            }
        }else {
            while (t--) {
                a[a_t] = a[a_t-1] - 1;
                a_t++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        if (d == 'R') {
            while (t--) {
                b[b_t] = b[b_t-1] + 1;
                b_t++;
            }
        }else {
            while (t--) {
                b[b_t] = b[b_t-1] - 1;
                b_t++;
            }
        }
    }
    int cnt = 0;
    if (a_t == b_t) {}
    else if (a_t < b_t) {
        for (int i = a_t; i < b_t; i++) {
            a[i] = a[i-1];
            a_t++;
        }
    }else {
        for (int i = b_t; i < a_t; i++) {
            b[i] = b[i-1];
            b_t++;
        }
    }

    for (int i = 2; i < a_t; i++) {
        if (a[i] == b[i] && a[i-1] != b[i-1]) cnt++;
    }

    cout << cnt;
    return 0;
}