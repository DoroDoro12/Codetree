#include <iostream>
using namespace std;
int n;

int num[10];
int p_cnt[10];
int d_cnt[10];

int main() {
    // Please write your code here.
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i] >> p_cnt[i] >> d_cnt[i];
    }

    int cnt = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i == j) continue;
            for (int k =1 ; k <= 9; k++) {
                if (i == k || j == k) continue;
                bool val = true;
                for (int z = 0; z < n; z++) {
                    int a1 = num[z] / 100;
                    int a2 = ((num[z]) - a1 * 100) / 10;
                    int a3 = num[z] % 10;

                    int cnt1 = 0;
                    int cnt2 = 0;
                    if (i == a1) cnt1++;
                    if (j == a2) cnt1++;
                    if (k == a3) cnt1++;

                    if (i == a2 || i == a3) cnt2++;
                    if (j == a1 || j == a3) cnt2++;
                    if (k == a1 || k == a2) cnt2++;

                    if (cnt1 != p_cnt[z] || cnt2 != d_cnt[z]) {
                        val = false;
                        break;
                    }
                }
                if (val) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}