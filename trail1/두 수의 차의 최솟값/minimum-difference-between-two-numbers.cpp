#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    int min = 100;

    for (int i = 0; i < n-1; i++) {
        if (min > arr[i+1] - arr[i]) {
            min = arr[i+1] - arr[i];
        }
    }
    cout << min;
    return 0;
}