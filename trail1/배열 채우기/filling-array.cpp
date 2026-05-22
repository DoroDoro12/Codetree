#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }else {
            arr[i] = n;
            cnt++;
        }
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}