#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    string str = to_string(a + b);
    int cnt = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '1') {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}