#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[1000001] = {}, b[1000001] = {};
    int n, m;
    cin >> n >> m;

    int time = 1;
    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            a[time] = a[time-1] + v;
            time++;
        }
    }
    time = 1;

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        while (t--) {
            b[time] = b[time-1] + v;
            time++;
        }
    }

    int cnt = 0;

    int lead[1000001] = {};
    for (int i = 1; i <= time; i++) {
        if (a[i] > b[i]) lead[i] = 1;
        else if (a[i] < b[i]) lead[i] = 2;
        else lead[i] = lead[i-1];
    }
    for (int i = 1; i <= time; i++) {
        if (lead[i] * lead[i-1] != 0 && lead[i] != lead[i-1]) cnt++;
    }
    cout << cnt;
    return 0;
}