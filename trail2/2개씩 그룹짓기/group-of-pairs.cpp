#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[2000];
    for (int i = 0; i < 2*n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    sort(arr, arr+(2*n));
    int max = 0;

    for (int i = 0; i < n; i++) {
        max = (max < arr[i] + arr[2*n-1-i]) ? arr[i] + arr[2*n-1-i] : max;
    }
    cout << max;

    return 0;
}