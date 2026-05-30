#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;

        if (i % 2 == 0) {
            sort(arr, arr+i+1);
            cout << arr[(i)/2] << " ";
        }
    }

    return 0;
}