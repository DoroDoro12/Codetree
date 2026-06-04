#include <iostream>

#define MAX_N 50
using namespace std;
int n, t;
int x, y;
char c;

int arr[MAX_N][MAX_N];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int Get_Dir(char c) {
    if (c == 'U') return 0;
    if (c == 'L') return 1;
    if (c == 'R') return 2;
    return 3;
}

bool InRange(int x, int y) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n));
}

int main() {
    // Please write your code here.
    cin >> n >> t; 
    cin >> x >> y >> c;
    x--;
    y--;

    int dir = Get_Dir(c);
    while (t--) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (!InRange(nx, ny)) {
            dir = 3 - dir;
            continue;
        }
        x = nx;
        y = ny;
    }

    cout << x+1 << " " << y+1;
    return 0;
}