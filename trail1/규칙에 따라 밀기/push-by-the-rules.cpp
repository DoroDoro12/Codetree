#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str, cmd;
    cin >> str >> cmd;

    int len = str.length();
    
    for (int i = 0; cmd[i] != '\0'; i++) {
        if (cmd[i] == 'L') {
            str = str.substr(1) + str.substr(0, 1);
        }else {
            str = str.substr(len-1) + str.substr(0, len-1);
        }
    }

    cout << str;
    return 0;
}