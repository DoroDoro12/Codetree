#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2;
    cin >> str1 >> str2;

    string tot1, tot2;

    for (int i = 0; str1[i]; i++) {
        if (str1[i] <= '9' && str1[i] >= '0') {
            tot1 += str1.substr(i, 1);
        }
    }

    for (int i = 0; str2[i]; i++) {
        if (str2[i] <= '9' && str2[i] >= '0') {
            tot2 += str2.substr(i, 1);
        }
    }
    cout << stoi(tot1) + stoi(tot2);

    return 0;
}