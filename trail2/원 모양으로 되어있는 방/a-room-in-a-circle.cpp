#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int arr[1004];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int d_min = INT_MAX;
    // i가 시작하는 방. j가 가야할 방.
    for (int i = 1; i <= n; i++) {
        int d_sum = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            if (i < j) {
                d_sum += (j - i) * arr[j];
            }else {
                d_sum += (n - i + j) * arr[j];
            }
        }
        d_min = min(d_min, d_sum);
    }

    cout << d_min;

    return 0;
}