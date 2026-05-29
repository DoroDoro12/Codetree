#include <iostream>

using namespace std;

int Max(int arr[], int n) {
    if (n == 1) return arr[0];
    int max = Max(arr, n-1);
    return (max < arr[n-1]) ? arr[n-1] : max;
}

int n;
int arr[100];


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << Max(arr, n);
    return 0;
}