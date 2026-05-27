#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum = 0;
    string str = to_string(n);
    for (int i = 0; str[i]; i++) {
        sum += str[i] - '0';
    }

    cout << sum;
    return 0;
}