#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int r1, r2;
    r1 = r2 = 0;

    string str;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str.substr(i, 2) == "ee") {
            r1++;
        }
        else if (str.substr(i, 2) == "eb") {
            r2++;
        }
    }

    cout << r1 << " " << r2;
    return 0;
}