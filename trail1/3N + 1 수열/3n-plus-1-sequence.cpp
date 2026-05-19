#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 0;

    while(1) {
        cin >> n;
        if (n == 1) {
            break;
        }
        if (n % 2 == 0) {
            n /= 2;
            cnt++;
        }else {
            n = 3*n + 1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}