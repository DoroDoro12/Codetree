#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;
int arr[100];

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int d_min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int d_sum = 0;
        for (int j = 0; j < n; j++) {
            d_sum += arr[j] * (abs(i - j));
        }
        d_min = min(d_min, d_sum);
    }

    cout << d_min;

    return 0;
}