#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    int cnt = 0;

    cin >> a >> b;

    for (int i = 0; a[i] != '\0'; i++) {
        if (a.substr(i, 2) == b) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}