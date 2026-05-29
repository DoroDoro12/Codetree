#include <iostream>
#include <string>

using namespace std;

bool IsUni(string str) {
    char c = str[0];

    for (int i = 1; i < str.length(); i++) {
        if (c != str[i]) {
            return false;
        }
    }
    return true;
}

string A;

int main() {
    cin >> A;
    if (IsUni(A)) {
        cout << "No";
    }else {
        cout << "Yes";
    }
    return 0;
}