#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'e') {
            str = str.substr(0, i) + str.substr(i+1);
            break;
        }
    }

    cout << str;
    return 0;
}