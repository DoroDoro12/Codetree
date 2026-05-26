#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int len = str.length();

    str[len-2] = str[1] = 'a';
    cout << str;
    return 0;
}