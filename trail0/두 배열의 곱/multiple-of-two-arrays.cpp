#include <iostream>
using namespace std;

int main() {
    int a1[3][3], a2[3][3], b[3][3];

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            cin >> a1[i][j];
        }
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            cin >> a2[i][j];
        }
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = a1[i][j] * a2[i][j];
        }
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}