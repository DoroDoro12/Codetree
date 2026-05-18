#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum = 0, cnt = 0;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        sum += a;
        cnt ++;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << double(sum) / cnt;
    return 0;
}