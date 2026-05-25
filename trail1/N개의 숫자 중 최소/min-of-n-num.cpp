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
    int min = arr[0];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            cnt = 1;
        }else if (min == arr[i]) {
            cnt++;
        }
    }

    cout << min << " " << cnt;
    return 0;
}