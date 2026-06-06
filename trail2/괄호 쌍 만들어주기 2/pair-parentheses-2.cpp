#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i <= s.length()-4; i++) {
        for (int j = i+2; j < s.length()-1; j++) {
            if (s.substr(i, 2) == "((" && s.substr(j,2) == "))") cnt++;
        }
    }

    cout << cnt;
    return 0;
}