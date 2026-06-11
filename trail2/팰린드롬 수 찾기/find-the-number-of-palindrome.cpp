#include <iostream>
#include <string>
using namespace std;
int x, y;
int cnt;


int main() {
    // Please write your code here.
    cin >> x >> y;

    for (int i = x; i <= y; i++) {
        string str = to_string(i);
        int len = str.length();
        bool val = true;
        for (int j = 0; j < len/2; j++) {
            if (str[j] != str[len-1-j]) val = false;
        }
        if (val) cnt++;
    }

    cout << cnt;
    return 0;
}