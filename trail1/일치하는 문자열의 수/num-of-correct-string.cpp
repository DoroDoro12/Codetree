#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string a;

    cin >> n >> a;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == a) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}