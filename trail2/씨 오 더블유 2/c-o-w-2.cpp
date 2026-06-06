#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i <= n-3; i++) {
        for (int j = i+1; j <= n-2; j++) {
            for (int k = j+1; k <= n-1; k++) {
                if (s[i] == 'C' && s[j] == 'O' && s[k] == 'W') cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}