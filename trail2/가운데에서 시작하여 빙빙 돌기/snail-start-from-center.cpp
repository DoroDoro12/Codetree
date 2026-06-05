#include <iostream>
using namespace std;
int n, x, y;
int stt;
int dir;
int r;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int arr[100][100];

bool Square(int x, int y) {
    return (x >= stt-r && x <= stt+r && y >= stt-r && y <= stt+r);
}

int Pow(int x) {
    return x*x;
}

int main() {
    // Please write your code here.
    cin >> n;
    x = n / 2; y = n / 2;
    stt = x;
    arr[x][y] = 1;
    x += dx[dir];
    y += dy[dir];
    r = 1;

    for (int i = 3; i <= n; i+=2) {
        for (int j = Pow(i-2) + 1; j <= Pow(i); j++) {
            arr[x][y] = j;
            if (j == Pow(i)) r++;
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (!Square(nx, ny)) {
                dir = (dir + 3) % 4;
            }
            x += dx[dir];
            y += dy[dir];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}