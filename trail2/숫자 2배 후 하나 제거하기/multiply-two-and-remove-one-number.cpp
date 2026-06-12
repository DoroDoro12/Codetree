#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;
int n;
int min_diff = INT_MAX;
int num[100];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        num[i] *= 2;
        for (int j = 0; j < n; j++) {
            int diff = 0;
            int cnt = 0;
            int arr[100] = {};

            for (int k = 0; k < n; k++) {
                if (j != k) {
                    arr[cnt++] = num[k];
                }
            }

            for (int k = 0; k < n-2; k++) {
                diff += abs(arr[k] - arr[k+1]);
            }
            min_diff = min(min_diff, diff);
        }
        num[i] /= 2;
    }

    cout << min_diff;
    return 0;
}