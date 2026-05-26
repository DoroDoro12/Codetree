#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int n;
    cin >> str >> n;
    int len = str.length();

    int fin = (len > n) ? n:len;

    for (int i = 0; i < fin; i++) {
        cout << str[len-1-i];
    }
    return 0;
}