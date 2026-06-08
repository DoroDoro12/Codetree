#include <iostream>
#include <algorithm>
using namespace std;
int n;
int x1[100];
int x2[100];


int main() {
    // Please write your code here.
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int stt = x1[i];
        int end = x2[i];
        int val = true;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int x1_dif = stt - x1[j];
            int x2_dif = end - x2[j];
            if (x1_dif * x2_dif < 0) {
                val = false;
                break;
            }

        }
        if (val) cnt++;
    }

    cout << cnt;
    return 0;
}