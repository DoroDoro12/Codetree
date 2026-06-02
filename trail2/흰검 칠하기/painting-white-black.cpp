#include <iostream>
using namespace std;

bool IsGray(string s) {
    int b = 0;
    int w = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'B') b++;
        if (s[i] == 'W') w++;
    }
    if (b >= 2 && w >= 2) return true;
    return false;
}

bool IsBlack(string s) {
    int idx = s.length()-1;
    if (s[idx] == 'B') return true;
    return false;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    
    string line[200000];
    int p = 100000;

    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if (c == 'R') {
            for (int j = p; j < p+x; j++) {
                line[j] += "B";
            }
            p = p + x - 1;
        }else {
            for (int j = p; j > p-x; j--) {
                line[j] += "W";
            }
            p = p - x + 1;
        }
    }
    int w_cnt = 0;
    int b_cnt = 0;
    int g_cnt = 0;
    for (int i = 0; i < 200000; i++) {
        if (line[i] == "") continue;
        if (line[i].length() >= 4) {
            if (IsGray(line[i])) g_cnt++;
            else if (IsBlack(line[i])) b_cnt++;
            else w_cnt++;
        }
        else if (IsBlack(line[i])) b_cnt++;
        else w_cnt++;
    }
    cout << w_cnt << " " << b_cnt << " " << g_cnt;
    return 0;
}