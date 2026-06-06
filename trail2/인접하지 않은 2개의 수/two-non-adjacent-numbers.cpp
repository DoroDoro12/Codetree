#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int n_sum = 0;
    for (int i = 0; i <= n-3; i++) {
        for (int j = i+2; j < n; j++) {
            int t_sum = arr[i] + arr[j];
            n_sum = max(n_sum, t_sum);
        }
    }

    cout << n_sum;
    return 0;
}