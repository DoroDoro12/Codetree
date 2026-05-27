#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while (1) {
        string str;
        cin >> str;
        if (str == "END") {
            break;
        }
        string res;
        for (int i = str.length()-1; i >= 0; i--) {
            res += str[i];
        }

        cout << res << "\n";
    }
    return 0;
}