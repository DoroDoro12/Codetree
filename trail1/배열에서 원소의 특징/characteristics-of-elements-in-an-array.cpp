#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        arr[i] = n;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0) {
            cout << arr[i-1];
            break;
        }
    }
    return 0;
}