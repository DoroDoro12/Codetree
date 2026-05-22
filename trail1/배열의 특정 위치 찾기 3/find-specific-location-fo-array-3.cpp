#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int idx = 0;
    int arr[100];

    for (int i = 0; i < 100; i++) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }else {
            arr[i] = n;
            idx++;
        }
    }

    cout << arr[idx-1] + arr[idx-2] + arr[idx-3];
    return 0;
}