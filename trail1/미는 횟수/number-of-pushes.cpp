#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    int len = a.length();

    int n = 0;

    while (n < len) {
        a = a.substr(len-1) + a.substr(0, len-1);
        n++;
        if (a == b) {
            break;
        }
    }

    n = (n >= len) ? -1:n;
    cout << n;
    return 0;
}