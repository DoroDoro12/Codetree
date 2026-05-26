#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string ab, ba;

    string a, b;
    cin >> a >> b;

    ab = a + b;
    ba = b + a;

    if (ab == ba) {
        cout << "true";
    }else {
        cout << "false";
    }
    return 0;
}