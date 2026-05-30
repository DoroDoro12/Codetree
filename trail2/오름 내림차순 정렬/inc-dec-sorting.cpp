#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr+n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}