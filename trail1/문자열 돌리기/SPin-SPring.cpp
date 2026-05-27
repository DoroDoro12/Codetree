#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int l = str.length();
    cout << str << "\n";

    for (int i = 0; i < l; i++) {
        str = str.substr(l-1) + str.substr(0, l-1);
        cout << str << "\n";
    }
    return 0;
}