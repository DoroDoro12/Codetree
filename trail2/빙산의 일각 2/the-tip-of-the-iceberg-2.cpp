#include <iostream>
#include <algorithm>
using namespace std;
int n;
int cnt;
int arr[100];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int h = 1; h <= 999; h++) {
        int t_cnt = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] <= h) {
                if (arr[i-1] > h) t_cnt++;
            }
        }
        if (arr[n-1] > h) t_cnt++;
        cnt = max(cnt, t_cnt);
    }

    cout << cnt;
    return 0;
}