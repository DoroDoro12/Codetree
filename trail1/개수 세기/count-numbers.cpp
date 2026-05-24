#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == m) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}