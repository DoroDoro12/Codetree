#include <iostream>
using namespace std;
int n, k;
int cnt;
int arr[10][20];

int main() {
    // Please write your code here.
    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) { // 첫경기 i번 고르기
        for (int j = i+1; j < n; j++) { // 첫경기 j번 고르기
            int a;
            int b;
            bool val = true;
            for (int x = 1; x < k; x++) {
                for (int y = 0; y < n; y++) {
                    if (arr[x][y] == arr[0][i]) a = y;
                    if (arr[x][y] == arr[0][j]) b = y;
                }
                if (a > b) {
                    val = false;
                    break;
                }
            }
            if (val) cnt++;
        }
    }

    cout << cnt;
    return 0;
}