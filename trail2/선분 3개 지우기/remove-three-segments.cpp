#include <iostream>
using namespace std;
int stt[10];
int endi[10];
int n;

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stt[i] >> endi[i];
    }
    int ans = 0;

    for (int i = 0; i <= n-3; i++) {
        for (int j = i+1; j <= n-2; j++) {
            for (int k = j+1; k <= n-1; k++) {
                int cnt[101] = {};
                bool val = true;
                for (int x = 0; x < n; x++) {
                    if (x == i || x == j || x == k) continue;
                    int a = stt[x];
                    int b = endi[x];
                    for (int y = a; y <= b; y++) {
                        cnt[y]++;
                    }
                }
                for (int x = 0; x < 101; x++) {
                    if (cnt[x] > 1) {
                        val = false;
                        break;
                    }
                }
                if (val) ans++;
            }
        }
    }

    cout << ans;
    return 0;
}