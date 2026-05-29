#include <iostream>
using namespace std;

void AbsoluteVal(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) arr[i] = -arr[i];
    }
}

int main() {
    // Please write your code here.
    int arr[50];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    AbsoluteVal(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}