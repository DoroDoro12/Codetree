#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int a[101] = {};
    int b[101] = {};

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        a[s] += 1;
    }

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        b[s] += 1;
    }

    bool same = true;
    for (int i = 1; i <= 100; i++) {
        if (a[i] != b[i]) {
            same = false;
            break;
        }
    }

    if (same) cout << "Yes";
    else cout << "No";
    return 0;
}