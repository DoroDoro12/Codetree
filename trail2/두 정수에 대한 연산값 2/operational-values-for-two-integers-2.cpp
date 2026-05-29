#include <iostream>
using namespace std;

void Cal(int &a, int &b) {
    if (a < b) {
        a += 10;
        b *= 2;
    }else {
        b += 10;
        a *=2;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    Cal(a, b);

    cout << a << " " << b;

    return 0;
}