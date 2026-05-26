#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0;

    string str;

    for (int i = 0; i < 2; i++) {
        cin >> str;
        sum += str.length();
    }

    cout << sum;
    return 0;
}