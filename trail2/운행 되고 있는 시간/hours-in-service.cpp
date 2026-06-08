#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n;
int tim[100][2];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tim[i][0] >> tim[i][1];
    }

    int max_t = INT_MIN;
    for (int i = 0; i < n; i++) {
        int count[1001] = {};
        int t_sum = 0;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int stt = tim[j][0];
            int end = tim[j][1];
            for (int k = stt; k < end; k++) {
                count[k] = 1;
            }
        }
        for (int j = 1; j <= 1000; j++) {
            t_sum += count[j];
        }
        max_t = max(max_t, t_sum);
    }

    cout << max_t;
    return 0;
}