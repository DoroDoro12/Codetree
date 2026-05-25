#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int arr[n+1][n+1] = {};

    for (int i = 0; i < m; i++) {
        int c, r;
        cin >> c >> r;
        arr[c][r] = c * r;
    }

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < n+1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}