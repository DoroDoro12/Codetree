#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, b;
    cin >> n >> b;

    int aft[20];
    int cnt = 0;

    while (1) {
        if (n < b) {
            aft[cnt++] = n;
            break;
        }
        aft[cnt++] = n % b;
        n /= b;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << aft[i];
    }
    return 0;
}