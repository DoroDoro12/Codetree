#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int dir[128];

int main() {
    // Please write your code here.
    int x = 0; int y = 0;
    int n;
    cin >> n;
    dir['N'] = 3; 
    dir['E'] = 0; 
    dir['S'] = 1; 
    dir['W'] = 2;


    int res = -1;
    int time = 0;
    for (int i = 0; i < n; i++) {
        char c; int t;
        cin >> c >> t;
        int n_dir = dir[c];

        while(t--) {
            x += dx[n_dir];
            y += dy[n_dir];
            time++;

            if (x == 0 && y == 0) {
                if (res == -1) res = time;
            }
        }
    }

    cout << res;
    return 0;
}