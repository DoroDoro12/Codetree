#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int n;
            cin >> n;
            arr[i][j] = n;
            sum += n;
        }
        cout << sum << "\n";
    }
    return 0;
}