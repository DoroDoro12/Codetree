#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int n;

    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }else if (n % 2 == 1) {
            cout << n + 3 << " ";
        }else {
            cout << n / 2 << " ";
        }
    }
    return 0;
}