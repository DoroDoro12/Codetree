#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir_n = 0;

    int x = 0;
    int y = 0;

    string c;
    getline(cin, c);

    for (int i = 0; c[i]; i++) {
        if (c[i] == 'L') dir_n = (dir_n+3) % 4;
        else if (c[i] == 'R') dir_n = (dir_n+1) % 4;
        else {
            x += dx[dir_n];
            y += dy[dir_n];
        }
    }

    cout << x << " " << y;
    return 0;
}