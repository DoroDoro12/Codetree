#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    sort(arr, arr+n);
    cout << arr[k-1];
    return 0;
}