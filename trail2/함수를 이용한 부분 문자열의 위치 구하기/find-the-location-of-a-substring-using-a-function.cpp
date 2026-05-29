#include <iostream>
using namespace std;

int SubIdx(string str, string tgt) {
    int idx = -1;

    for (int i = 0; i <= str.length() - tgt.length(); i++) {
        if (str.substr(i, tgt.length()) == tgt) {
            idx = i;
            return idx;
        }
    }
    return idx;
}

int main() {
    // Please write your code here.
    string str, tgt;
    cin >> str >> tgt;

    cout << SubIdx(str, tgt);
    return 0;
}