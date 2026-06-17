#include <iostream>
#include <algorithm>
using namespace std;
int arr[100][2];
int n;
int m;
int max_cnt;

int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            int cnt = 0;
            for (int k = 0; k < m; k++) {
                int x = min(arr[k][0], arr[k][1]);
                int y = max(arr[k][0], arr[k][1]);

                if ((i == x) && (j == y)) cnt++;
            }
            max_cnt = max(max_cnt, cnt);
        }
    }

    cout << max_cnt;
    return 0;
}