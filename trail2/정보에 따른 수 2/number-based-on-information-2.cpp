#include <iostream>
#include <algorithm>
using namespace std;
int t, a, b;
int arr[1001];
int cnt;


int main() {
    // Please write your code here.
    cin >> t >> a >> b;
    for (int i = 0; i < t; i++) {
        char c;
        int x;
        cin >> c >> x;
        if (c == 'S') arr[x] = 1;
        else arr[x] = 2;
    }

    for (int i = a; i <= b; i++) {
        int k1 = 1000;
        int k2 = 1000;
        for (int j = 1; j <= i; j++) {
            if (arr[j] == 0) continue;
            if (arr[j] == 1) k1 = min(k1, i-j);
            else k2 = min(k2, i-j);
        }
        for (int j = i+1; j <= 1000; j++) {
            if (arr[j] == 0) continue;
            if (arr[j] == 1) k1 = min(k1, j-i);
            else k2 = min(k2, j-i);
        }
        if (k1 <= k2) cnt++;
    }

    cout << cnt;
    return 0;
}