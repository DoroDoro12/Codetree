#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n;
int x[100];
int y[100];

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int min_d = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int x_sq = (x[i] - x[j]) * (x[i] - x[j]);
            int y_sq = (y[i] - y[j]) * (y[i] - y[j]);
            min_d = min(min_d, x_sq+y_sq);
        }
    }

    cout << min_d;
    return 0;
}