#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int n;
            cin >> n;
            arr[i][j] = n;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int n;
            cin >> n;
            cout << arr[i][j] * n << " ";
        }
        cout << "\n";
    }
    return 0;
}