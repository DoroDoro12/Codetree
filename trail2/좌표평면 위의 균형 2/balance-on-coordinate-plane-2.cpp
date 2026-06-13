#include <iostream>
#include <algorithm>
using namespace std;
int n;
int x[100];
int y[100];
int max_cnt = 1000;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i <= 100; i+=2) { //x축에 수직한 직선
        for (int j = 0; j <= 100; j+=2) {//y축에 수직한 직선
            int cnt1 = 0;
            for (int k = 0; k < n; k++) {
                if (x[k] > i && y[k] > j) cnt1++;
            }

            int cnt2 = 0;
            for (int k = 0; k < n; k++) {
                if (x[k] < i && y[k] > j) cnt2++;
            }

            int cnt3 = 0;
            for (int k = 0; k < n; k++) {
                if (x[k] < i && y[k] < j) cnt3++;
            }

            int cnt4 = 0;
            for (int k = 0; k < n; k++) {
                if (x[k] > i && y[k] < j) cnt4++;
            }
            int tmp = max(max(cnt1, cnt2), max(cnt3, cnt4));
            max_cnt = min(max_cnt, tmp);
        }
    }

    cout << max_cnt;
    return 0;
}