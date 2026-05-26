#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string res;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        res += str;
    }

    for (int i = 0; res[i] != '\0'; i++) {
        cout << res[i];
        if (i % 5 == 4) {
            cout << "\n";
        }
    }
    return 0;
}