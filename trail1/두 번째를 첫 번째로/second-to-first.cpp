#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    char x = str[0];
    char y = str[1];

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == y) {
            str[i] = x;
        }
    }

    cout << str;
    return 0;
}