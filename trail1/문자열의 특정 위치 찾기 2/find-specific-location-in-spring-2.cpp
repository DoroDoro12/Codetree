#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char c;
    cin >> c;

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (c == str[i][2] || c == str[i][3]) {
            cout << str[i] << "\n";
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}