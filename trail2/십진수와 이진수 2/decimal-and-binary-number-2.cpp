#include <iostream>
#include <string>
using namespace std;

int b_to_d(string b) {
    int num = 0;
    for (int i = 0; i < b.length(); i++) {
        num = num * 2 + (b[i] - '0');
    }

    return num;
}

string to_b(int n) {
    int digit[50];
    int cnt = 0;
    string res;

    while(1) {
        if (n < 2) {
            digit[cnt++] = n;
            break;
        }
        digit[cnt++] = n % 2;
        n /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        res += to_string(digit[i]);
    }

    return res;
}

int main() {
    // Please write your code here.
    string b;
    cin >> b;

    cout << to_b(b_to_d(b) * 17);
    return 0;
}