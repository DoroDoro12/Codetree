#include <iostream>
using namespace std;

bool InRange(int x, int y, int n) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n));
}

int main() {
    // Please write your code here.
    int arr[100][100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};

    int tot = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int dir = 0; dir < 4; dir++) {
                int nx = j + dx[dir];
                int ny = i + dy[dir];
                if (InRange(nx, ny, n) && arr[nx][ny] == 1) cnt++;
            }
            if (cnt >= 3) tot++;
        }
    }

    cout << tot;
    return 0;
}