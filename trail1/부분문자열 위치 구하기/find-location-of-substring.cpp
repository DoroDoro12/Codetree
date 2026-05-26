#include <iostream>
using namespace std;

int main() {
    int idx = -1;
    string str, tgt;

    cin >> str >> tgt;

    if (str.find(tgt) != string::npos) {
        idx = str.find(tgt);
    }

    cout << idx;
    return 0;
}