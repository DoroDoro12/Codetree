#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    while (str.length() > 1) {
        int idx;
        cin >> idx;

        if (idx >= str.length()) {
            str.erase(str.length()-1, 1);
        }
        else {
            str.erase(idx, 1);
        }
        cout << str << "\n";
    }
    return 0;
}