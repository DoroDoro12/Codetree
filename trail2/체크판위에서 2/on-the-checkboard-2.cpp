#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int r, c;
    cin >> r >> c;
    char arr[15][15];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char col;
            cin >> col;
            arr[i][j] = col;
        }
    }
    int cnt = 0;
    char stt = arr[0][0];
    char end = arr[r-1][c-1];

    for (int i = 1; i < r-2; i++) {
        for (int j = 1; j < c-2; j++) {
            for (int k = i+1; k < r-1; k++) {
                for (int p = j+1; p < c-1; p++) {
                    if (arr[i][j] != stt && arr[k][p] != end && arr[i][j] != arr[k][p]) cnt++;
                } 
            }
        }
    }
    cout << cnt;


    return 0;
}