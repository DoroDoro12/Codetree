#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int a[100] = {};
    int b[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }

    int cnt = 0;
    sort(b, b+m);
    for (int i = 0; i <= n-m; i++) {
        int temp[100];
        for (int j = i; j < i+m; j++){
            temp[j-i] = a[j];
        }
        sort(temp, temp+m);
        bool val = true;
        for (int k = 0; k < m; k++) {
            if (temp[k] != b[k]) {
                val = false;
                break;
            }
        }
        if (val) cnt++;
    }

    cout << cnt;
    return 0;
}