#include <iostream>
using namespace std;
void Palindrome(string &str) {
    string res;
    for (int i = str.length(); i >= 0; i--) {
        res += str.substr(i, 1);
    }
    str = res;
}

bool IsPalindrome(string str) {
    string tmp = str;
    Palindrome(tmp);
    if (str == tmp) return true;
    return false;
}

int main() {
    // Please write your code here.
    string a;
    cin >> a;

    if (IsPalindrome(a)) cout << "Yes";
    else cout << "No";

    return 0;
}