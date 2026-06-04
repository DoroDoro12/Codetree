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
        while (t--) {
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

    int lead = 0;
    int cnt = 0;
    for (int i = 1; i < time; i++) {
        if (a[i] > b[i]) {
            if (lead != 1) cnt++;
            lead = 1;
        }else if (a[i] < b[i]) {
            if (lead != 2) cnt++;
            lead = 2;
        }else{
            if (lead != 3) cnt++;
            lead = 3;
        }
    }
    cout << cnt;
    
    return 0;
}