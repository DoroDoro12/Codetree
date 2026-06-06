#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ')') continue;
        for (int j = i+1; s[j]; j++) {
            if (s[j] == ')') cnt++;
        }
    }
    cout << cnt;
    return 0;
}