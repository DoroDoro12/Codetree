#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int dir = 0;
    int n;
    string s;
    cin >> s;

    int x = 0; int y =0;
    int time = 0;
    int res = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }else if (s[i] == 'R') {
            dir = (dir + 1) % 4;
        }else {
            dir = (dir + 3) % 4;
        }
        time++;
        if (x == 0 && y == 0 && res == -1) res = time;
    }

    cout << res;
    return 0;
}