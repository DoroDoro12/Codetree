#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[1000];
    cin >> n;

    int max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i-1] == arr[i]) {
            cnt++;
            max = (max < cnt) ? cnt : max;
        }else {
            cnt = 1;
        }
    }
    cout << max;
    return 0;
}