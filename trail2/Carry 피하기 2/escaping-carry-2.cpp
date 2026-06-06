#include <iostream>
#include <algorithm>
using namespace std;

bool IsCarry(int x, int y, int z) {
    while (x != 0 || y != 0 || z != 0) {
        if ((x % 10) + (y % 10) + (z % 10) >= 10) return false;
        x /= 10; y /= 10; z /= 10;
    }
    return true;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[20];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s_max = -1;
    for (int i = 0; i <= n-3; i++) {
        for (int j = i+1; j <= n-2; j++) {
            for (int k = j+1; k <= n-1; k++) {
                if (IsCarry(arr[i], arr[j], arr[k])){
                    s_max = max(s_max, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }

    cout << s_max;
    return 0;
}