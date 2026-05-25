#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10][10];
    int n_arr[10][10];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            n_arr[i][j] = num;
            if (arr[i][j] == n_arr[i][j]) {
                cout << 0 << " ";
            }else {
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}