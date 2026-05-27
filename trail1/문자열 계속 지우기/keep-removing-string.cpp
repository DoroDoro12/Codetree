#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    int b_len = b.length();

    while (1) {
        int len1 = a.length();

        for (int i = 0; i <= len1-b_len; i++) {
            if (a.substr(i, b_len) == b) {
                a = a.substr(0,i) + a.substr(i+b_len);
                break;
            }
        }
        int len2 = a.length();
        if (len1 == len2) {
            cout << a;
            break;
        }
    }
    return 0;
}