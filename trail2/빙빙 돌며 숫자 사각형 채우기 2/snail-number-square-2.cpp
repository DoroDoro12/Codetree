#include <iostream>
using namespace std;
int n, m;
int x, y;
int dir;
int arr[100][100];
int cnt;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void move() {
    x += dx[dir];
    y += dy[dir];
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    for (int i = 1; i <= n*m; i++) {
        arr[x][y] = i;
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (!InRange(nx, ny) || arr[nx][ny] != 0) {
            dir = (dir + 3) % 4;
        }
        move();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}