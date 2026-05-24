#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;

    int sum = 0;
    int arr[10] = {};

    while (a > 1) {
        int r = a % b;
        arr[r]++;
        a /= b;
    }
    for (int i = 0; i < b; i++) {
        sum += (arr[i] * arr[i]);
    }
    cout << sum;
    return 0;
}