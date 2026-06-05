#include <iostream>
#include <string>

using namespace std;
// n은 격자 수, k는 레이저 위치.
// dir은 레이저 방향, xy는 시작위치.
int n, k, dir;
int x, y;
char arr[1000][1000];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

// 레이저 방향 및 시작 위치 잡기.
void Initialize() {
    dir = (k-1) / n;
    if (k <= n) {
        x = 0;
        y = k-1;
    }else if (k <= 2*n) {
        x = k - (n + 1);
        y = n - 1;
    }else if (k <= 3*n) {
        x = n - 1;
        y = n - (k - (2 * n));
    }else {
        x = n - (k - (3 * n));
        y = 0;
    }
}

void Move() {
    x += dx[dir];
    y += dy[dir];
}

// 빛 비추기 시작.
int Simulate() {
    int cnt = 0;
    while(InRange(x, y)) {
        if (arr[x][y] == '/') {
            dir = dir ^ 1;
        }else {
            dir = 3 - dir;
        }
        Move();
        cnt += 1;
    }
    return cnt;
}


int main() {
    // 거울 배열 완성하기
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //레이저 위치 k받고 초기조건 함수 부르기.
    cin >> k;
    Initialize();

    int result = Simulate();
    cout << result;
    return 0;
}