#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int s, n;
    cin >> n >> s;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_dif = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int t_sum = 0;
            for (int k = 0; k < n; k++) {
                if (k == i) continue;
                if (k == j) continue;
                t_sum += arr[k];
            }
            min_dif = min(abs(t_sum - s), min_dif);
        }
    }
    cout << min_dif;
    return 0;
}