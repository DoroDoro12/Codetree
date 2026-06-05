#include <iostream>
using namespace std;
int n, m;
int x, y;
int dir;
char arr[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool IsAlready(int x, int y) {
    return (arr[x][y] != 0);
}

void Turn() {
    dir = (dir + 1) % 4;
}

void move() {
    x = x + dx[dir];
    y = y + dy[dir];
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    char c = 'A';
    for (int i = 1; i <= n * m; i++) {
        arr[x][y] = c;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny) || IsAlready(nx, ny)) {
            Turn();
        }
        move();
        c = (((c - 65) + 1) % 26) + 65;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}