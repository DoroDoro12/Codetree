#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int res;

    cin >> a >> b >> c;
    res = (a >= b ? a : b) > c ? (a >= b ? a : b) : c;
    cout << res;

    return 0;
}