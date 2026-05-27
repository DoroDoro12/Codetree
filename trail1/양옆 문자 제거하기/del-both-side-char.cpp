#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    int len = str.length();

    str.erase(len-2, 1);
    str.erase(1, 1);
    cout << str;
    return 0;
}