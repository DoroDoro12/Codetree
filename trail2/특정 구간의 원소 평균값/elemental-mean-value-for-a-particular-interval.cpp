#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t_sum = 0;
            for (int k = i; k <= j; k++) {
                t_sum += arr[k];
            }
            if (i == j) {
                cnt++;
                continue;
            }
            for (int z = i; z <= j; z++) {
                if (t_sum == (j-i+1) * arr[z]) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}