#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int x = 0, y = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        char c;
        int p;
        cin >> c >> p;

        if (c == 'N') y += p * dy[3];
        else if (c == 'E') x += p * dx[0];
        else if (c == 'S') y += p * dy[2];
        else x += p * dx[1];
    }

    cout << x << " " << y;
    return 0;
}