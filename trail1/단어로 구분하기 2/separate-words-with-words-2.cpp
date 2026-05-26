#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for (int i = 0; i < 10; i++) {
        string str;
        cin >> str;
        if (i % 2 ==0) {
            cout << str << "\n";
        }
    }
    return 0;
}