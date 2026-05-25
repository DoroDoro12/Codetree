#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 2) {
            cnt++;
        }

        if (cnt == 3) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}