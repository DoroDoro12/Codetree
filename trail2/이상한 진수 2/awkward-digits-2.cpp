#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int max_b = 0;
    for (int i = 0; s[i]; i++) {
        int sum_b = 0;
        s[i] = (s[i] == '0') ? '1' : '0';
        for (int j = 0; s[j]; j++) {
            sum_b = 2*(sum_b) + (s[j]-'0');
        }
        s[i] = (s[i] == '0') ? '1' : '0';
        max_b = max(max_b, sum_b);
    }

    cout << max_b;
    return 0;
}