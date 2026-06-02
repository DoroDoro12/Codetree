#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string n;
    cin >> n;

    int num = 0;
    for (int i = 0; i < n.length(); i++) {
        num = num * 2  + (n[i] - '0');
    }

    cout << num;
    return 0;
}