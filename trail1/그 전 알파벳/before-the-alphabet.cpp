#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;

    c = (c == 'a') ? 'z':c-1;
    cout << c;
    return 0;
}