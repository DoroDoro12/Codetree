#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int sum = 0;

    for (int i = 0; str[i]; i++) {
        if (isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }

    cout << sum;
    return 0;
}