#include <iostream>
using namespace std;

// offset = 1000, 

int main() {
    // Please write your code here.
    int arr[2001][2001] = {};

    for (int i = 1; i >= 0; i--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                arr[j][k] = i;
            }
        }
    }

    int row_max = 0, row_min = 2000, col_max = 0, col_min = 2000;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] != 0) {
                row_max = (row_max < i) ? i : row_max;
                row_min = (row_min > i) ? i : row_min;
                col_max = (col_max < j) ? j : col_max;
                col_min = (col_min > j) ? j : col_min;
            }
        }
    }
    int ans;
    if (row_max < row_min) ans = 0;
    else ans = (row_max + 1 - row_min) * (col_max+1 - col_min);
    cout << ans;
    return 0;
}