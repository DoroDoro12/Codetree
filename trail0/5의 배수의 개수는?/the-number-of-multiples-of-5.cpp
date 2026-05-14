#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int a[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 5 == 0) {
                cnt += 1;
            }
        }
    }

    cout << cnt;
    return 0;
}