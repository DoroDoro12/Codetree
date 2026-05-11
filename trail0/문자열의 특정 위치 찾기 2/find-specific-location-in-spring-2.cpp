#include <iostream>
using namespace std;

int main() {
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char a;
    cin >> a;

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        string s1 = str[i];
        if (s1[2] == a || s1[3] == a) {
            sum += 1;
            cout << s1 << "\n";
        }
    }

    cout << sum;
    return 0;
}