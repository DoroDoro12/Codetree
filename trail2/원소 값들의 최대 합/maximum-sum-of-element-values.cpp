#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[101];
int max_sum;

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int stt = 1; stt <= n; stt++) {//시작 위치 stt
        int sum = 0;
        int idx = stt;
        for (int i = 0; i < m; i++) {
            sum += arr[idx];
            idx = arr[idx];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}