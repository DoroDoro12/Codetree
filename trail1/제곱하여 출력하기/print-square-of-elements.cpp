#include <iostream>
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

    for (int i = 0; i < n; i++) {
        arr[i] *= arr[i];
        cout << arr[i] << " ";
    }
    return 0;
}