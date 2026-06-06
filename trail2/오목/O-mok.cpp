#include <iostream>

using namespace std;

int arr[19][19];

bool InRange(int x, int y) {
    return (x >= 0 && x < 19 && y >= 0 && y < 19);
}

bool Horizontal(int x, int y) {
    int ans = arr[x][y];
    bool valid = true;
    for (int i = y - 2; i <= y+2; i++) {
        if (!InRange(x, i)) {
            valid = false;
            break;
        }
        if (ans != arr[x][i]) valid = false;
    }
    return valid;
}

bool Vertical(int x, int y) {
    int ans = arr[x][y];
    bool valid = true;
    for (int i = x-2; i <= x+2; i++) {
        if (!InRange(i, y)) {
            valid = false;
            break;
        }
        if (ans != arr[i][y]) valid = false;
    }
    return valid;
}

bool L_Diagonal(int x, int y) {
    int ans = arr[x][y];
    bool valid = true;
    for (int i = -2; i <= 2; i++) {
        if (!InRange(x+i, y+i)) {
            valid = false;
            break;
        }
        if (ans != arr[x+i][y+i]) valid =false;
    }
    return valid;
}

bool R_Diagonal(int x, int y) {
    int ans = arr[x][y];
    bool valid = true;
    for (int i = -2; i <= 2; i++) {
        if (!InRange(x+i, y-i)) {
            valid = false;
            break;
        }
        if (ans != arr[x+i][y-i]) valid =false;
    }
    return valid;
}

int main() {
    int rx = -1, ry = -1;
    for (int i = 0; i <= 18; i++) {
        for (int j = 0; j <= 18; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i <= 18; i++) {
        for (int j = 0; j <= 18; j++) {
            if (arr[i][j] == 0) continue;
            if (Horizontal(i, j) || Vertical(i, j) || L_Diagonal(i, j) || R_Diagonal(i, j)){
                rx = i;
                ry = j;
                break;
            }
        }
    }

    if (rx == -1) cout << 0;
    else cout << arr[rx][ry] << endl << rx+1 << " " << ry+1;
    return 0;
}