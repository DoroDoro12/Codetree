#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    char f = str[0];
    char s = str[1];

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == f) {
            str[i] = s;
        }else if (str[i] == s) {
            str[i] = f;
        }
    }

    cout << str;
    return 0;
}