#include <iostream>
using namespace std;
int n, m;
char arr[50][50];

int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y <m);
}

int main() {
    // Please write your code here.
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != 'L') continue;
            for (int k = 0; k < 8; k++) {
                int cnt = 1;
                int cx = i;
                int cy = j;
                for (int l = 0; l < 2; l++) {
                    int nx = cx + dx[k];
                    int ny = cy + dy[k];

                    if (!InRange(nx, ny) || arr[nx][ny] != 'E') break;
                    cx = nx;
                    cy = ny;
                    cnt++;
                }
                if (cnt == 3) ans++;
            }
        }
    }

    cout << ans;


    return 0;
}