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
}

void Turn() {
    dir = (dir + 1) % 4;
    if (dir == 0 || dir == 2) {
        mv_cnt++;
    }
}

bool End() {
    return (!InRange(x, y));
}

void Move() {
    x = x + dx[dir];
    y = y + dy[dir];
}

void Simulate() {
    while (!End()) {
        for (int i = 0; i < mv_cnt; i++) {
            arr[x][y] = num++;
            Move();
            if (End()) break;
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
