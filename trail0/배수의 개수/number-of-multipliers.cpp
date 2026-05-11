#include <iostream>
using namespace std;

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    int cnt_3 = 0;
    int cnt_5 = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] % 3 == 0) {
            cnt_3 += 1;
        }if (a[i]  % 5 == 0) {
            cnt_5 += 1;
        }
    }

    cout << cnt_3 << " " << cnt_5;
    return 0;
}