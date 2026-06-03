#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[1000001] = {}, b[1000001] = {};
    int n, m;
    cin >> n >> m;

    int ap = 0, bp = 0;
    int time = 0;
    for (int i = 0; i < n; i++) {
        char c;
        int t;
        cin >> c >> t;

        if (c == 'R') {
            for (int j = 1; j <= t; j++) {
                ap++;
                time++;
                a[time] = ap;
            }
        }else {
            for (int j = 1; j <= t; j++) {
                ap--;
                time++;
                a[time] = ap;
            }
        }
    }
    time = 0;
    for (int i = 0; i < m; i++) {
        char c;
        int t;
        cin >> c >> t;

        if (c == 'R') {
            for (int j = 1; j <= t; j++) {
                bp++;
                time++;
                b[time] = bp;
            }
        }else {
            for (int j = 1; j <= t; j++) {
                bp--;
                time++;
                b[time] = bp;
            }
        }
    }
    int res = -1;
    for (int i = 1; i <= time; i++) {
        if (a[i] == b[i]) {
            res = i;
            break;
        }
    }
    cout << res;
    return 0;
}