#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    c = (((c+1) - 97) % 26) + 97;
    cout << c;
    return 0;
}