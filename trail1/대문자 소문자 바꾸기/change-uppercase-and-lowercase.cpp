#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                cout << (char)toupper(str[i]);
            }else {
                cout << (char)tolower(str[i]);
            }
        }
    }
    return 0;
}