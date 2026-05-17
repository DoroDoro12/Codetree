#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (k % 2 == 1 && k % 3 == 0) {
            cout << k << endl;
        }
    }
    return 0;
}