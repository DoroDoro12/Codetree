#include <iostream>
#include<cctype>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            cout << (char)toupper(str[i]);
        } 
    }
    return 0;
}