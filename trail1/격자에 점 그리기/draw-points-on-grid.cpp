#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int m;
    cin >> n >> m;
    int num = 1;

    int arr[10][10] = {};
    for (int i = 0; i < m; i++) {
        int c, r;
        cin >> c >> r;
        arr[c][r] = num;
        num++;
    }

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < n+1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}