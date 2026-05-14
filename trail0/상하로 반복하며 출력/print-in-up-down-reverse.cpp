#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[9][9];

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                a[j][i] = cnt;
                cnt += 1;
            }
        }else {
            for (int j = n - 1; j >= 0; j--) {
                a[j][i] = cnt;
                cnt += 1;

            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}