#include <iostream>
using namespace std;

bool IsMagicNumber(int a) {
    if (a % 2 == 0)
        return false;
    if (a % 10 == 5)
        return false;
    if (a % 3 == 0 && a % 9 != 0)
        return false;
    return true;
}

int main() {
    // Please write your code here.

    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (IsMagicNumber(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}