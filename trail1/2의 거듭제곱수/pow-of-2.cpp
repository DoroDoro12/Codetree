#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 0;

    cin >> n;

    while (n != 1) {
        n /= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}