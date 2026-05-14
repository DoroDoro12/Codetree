#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a1[10][10], a2[10][10], b[10][10];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (a1[i][j] == a2[i][j]) {
                b[i][j] = 0;
            }else {
                b[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}