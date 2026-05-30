#include <iostream>

using namespace std;

int n;
int arr[10];

int GCD(int a, int b) {
    while(b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int LCM(int arr[], int n) {
    if (n == 1) return arr[0];
    int a = LCM(arr, n-1);
    int b = arr[n-1];
    int gcd = GCD(a, b);
    return (a * b)/(gcd);

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    cout << LCM(arr, n);

    return 0;
}