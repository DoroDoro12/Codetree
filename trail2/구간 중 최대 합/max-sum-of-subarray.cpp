#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = 0;
    for (int i = 0; i <= n-k; i++) {
        int t_sum = 0;
        for (int j = i; j < i+k; j++) {
            t_sum += arr[j];
        }
        max_sum = max(max_sum, t_sum);
    }

    cout << max_sum;
    return 0;
}