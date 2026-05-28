#include <iostream>
using namespace std;

bool Is369(int n) {
    string str = to_string(n);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '3' || str[i] == '6' || str[i] == '9') {
            return true;
        }
    }
    return false;
}


bool IsMagic(int n) {
    return (n % 3 == 0) || Is369(n);
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (IsMagic(i)) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}