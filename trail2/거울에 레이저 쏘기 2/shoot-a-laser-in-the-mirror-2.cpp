#include <iostream>
#include <string>
using namespace std;
int n, k;

// 배열은 n+2크기로만들고, 인덱스는 1 ~ n
char arr[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int l_mirror(int d) {
    if (d == 0) return 1;
    if (d == 1) return 0;
    if (d == 2) return 3;
    return 2;
}

int r_mirror(int d) {
    d = 3 - d;
    return d;
}

int main() {
    // Please write your code here.
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        for (int j = 0; j < n; j++) {
            arr[i][j] = s[j];
        }
    }
    cin >> k;
    int dir;
    dir = ((k-1) / n);

    // 시작점 (레이저) x,y
    int x;
    int y;
    if (k <= n) {
        x = 0; 
        y = k-1;
    }else if (k <= 2*n) {
        x = k - n;
        y = n - 1;
    }else if (k <= 3*n) {
        x = n - 1;
        y = n - (k - 2 * n);
    }else {
        x = n - (k - 3 * n);
        y = 0;
    }

    int cnt = 0;
    while (1) {
        if (arr[x][y] == '/') {
            dir = l_mirror(dir);
            cnt++;
        }else if (arr[x][y] == '\\') {
            dir = r_mirror(dir);
            cnt++;
        }
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (!InRange(nx, ny)) break;
        else {
            x = nx;
            y = ny;
        }
    } 

    cout << cnt;
    return 0;
}