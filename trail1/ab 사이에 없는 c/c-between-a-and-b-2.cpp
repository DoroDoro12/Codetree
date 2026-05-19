#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    bool sat = true;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            sat = false;
            break;
        }
    }

    if (sat) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}