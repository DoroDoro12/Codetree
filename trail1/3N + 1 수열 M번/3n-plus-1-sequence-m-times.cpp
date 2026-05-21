#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        int n;
        cin >> n;
        int cnt = 0;

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                cnt++;
            }else {
                n = 3*n + 1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}