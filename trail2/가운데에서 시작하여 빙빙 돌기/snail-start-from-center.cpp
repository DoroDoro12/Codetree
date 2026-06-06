#include <iostream>
using namespace std;
int n;
int x, y, dir;
int num;
int mv_cnt;
int arr[100][100];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

void Init() {
    x = n / 2;
    y = n / 2;
    mv_cnt = 1;
    num = 1;
    arr[x][y] = num;
    num++;
}

void Turn() {
    dir = (dir + 1) % 4;
    if (dir == 0 || dir == 2) {
        mv_cnt++;
    }
}

void Simulate() {
    while (1) {
        for (int i = 0; i < mv_cnt; i++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (!InRange(nx, ny)) {
                return;
            }
            x = nx;
            y = ny;
            arr[x][y] = num;
            num++;
        }
        Turn();
    }
}


int main() {
    cin >> n;
    Init();
    Simulate();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
