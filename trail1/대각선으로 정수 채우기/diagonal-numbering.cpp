#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[100][100];
    int num = 1;

    int row = 0, col = 0;
    for (int k = 0; k < m + n - 1; k++) {
        int j = (k > m-1) ? m-1 : k;
        int i = k - j;

        for (;j >= 0; j--) {
            if (i >= n) {
                break;
            }
            arr[i][j] = num;
            num++;
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}