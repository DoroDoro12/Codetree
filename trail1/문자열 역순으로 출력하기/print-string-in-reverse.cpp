#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[4];

    for (int i = 0; i < 4; i++) {
        string str1;
        cin >> str1;
        str[4 - i - 1] = str1;
    }
    for (int i = 0; i < 4; i++) {
        cout << str[i] << "\n";
    }
    return 0;
}