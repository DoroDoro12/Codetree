#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }

    str = to_string(sum);
    str = str.substr(1) + str.substr(0, 1);
    cout << str;
    return 0;
}