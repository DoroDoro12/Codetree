#include <iostream>
using namespace std;

int arr[100][100];
int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}


int main() {
    // Please write your code here.
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        arr[r][c] = 1;

        int cnt = 0;
        for (int dir = 0; dir < 4; dir++) {
            int nx = r + dx[dir];
            int ny = c + dy[dir];
            if (InRange(nx, ny) && arr[nx][ny] == 1) cnt++;
        }
        cout << (cnt == 3) << endl;
    }
    return 0;
}