#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    string n;
    cin >> a >> b >> n;

    int num = 0;
    for (int i = 0; i < n.length(); i++) {
        num = num * a + (n[i] - '0');
    }

    int digit[50];
    int cnt = 0;

    while(1) {
        if (num < b) {
            digit[cnt++] = num;
            break;
        }

        digit[cnt++] = num % b;
        num /= b;
    }

    for (int i = cnt-1; i >=0; i--) {
        cout << digit[i];
    }

    return 0;
}