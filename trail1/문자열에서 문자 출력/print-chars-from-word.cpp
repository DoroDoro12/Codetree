#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << "\n";
    }
    return 0;
}