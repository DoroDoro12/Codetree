#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100] = {1, n};
    int idx;

    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        if (arr[i] > 100) {
            idx = i;
            break;
        }
    }

    for (int i = 0; i <= idx; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}