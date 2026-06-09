#include <iostream>
#include <algorithm>
using namespace std;
int n, c, g, h;

int pc[1000][2];

int main() {
    // Please write your code here.
    cin >> n >> c >> g >> h;

    for (int i = 0; i < n; i++) {
        cin >> pc[i][0] >> pc[i][1];
    }
    int ans = 0;
    for (int i = -1; i <= 1001; i++) {
        int tmp = 0;
        for (int j = 0; j < n; j++) {
            if (i < pc[j][0]) tmp += c;
            else if (i > pc[j][1]) tmp += h;
            else tmp += g;
        }
        ans = max(ans, tmp);
    }

    cout << ans;
    return 0;
}