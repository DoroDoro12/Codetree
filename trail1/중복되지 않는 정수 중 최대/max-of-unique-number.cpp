#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[1001] = {};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }

    int idx = -1;

    for (int i = 1000; i > 0; i--) {
        if (arr[i] == 1) {
            idx = i;
            break;
        }
    }

    cout << idx;
    return 0;
}