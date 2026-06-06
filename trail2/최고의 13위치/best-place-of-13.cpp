#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    int m_cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-3; j++) {
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            m_cnt = max(m_cnt, sum);
        }
    }

    cout << m_cnt;
    return 0;
}