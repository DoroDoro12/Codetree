#include <iostream>
#include <string>
using namespace std;
int n, t;
int x, y, dir;
int sum;
int arr[99][99];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

string s;
bool InRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

void Initialize() {
    x = n / 2;
    y = n / 2;
    sum += arr[x][y];
}

void Simulate() {
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'L') {
            dir = (dir+3) % 4;
        }else if (s[i] == 'R') {
            dir = (dir+1) % 4;
        }else {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (!InRange(nx, ny)) {
                continue;
            }else {
                x = nx;
                y = ny;
                sum += arr[x][y];
            }
        }
    }
}

int main() {
    // Please write your code here.
    cin >> n >> t;
    cin >> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    Initialize();
    Simulate();
    cout << sum;

    return 0;
}