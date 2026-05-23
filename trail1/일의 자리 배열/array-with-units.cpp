#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int pp, p;
    cin >> pp >> p;

    cout << pp << " " << p << " ";

    for (int i = 0; i < 8; i++) {
        int temp = p + pp;
        pp = p;
        p = temp;

        cout << temp%10 << " ";
    }
    return 0;
}