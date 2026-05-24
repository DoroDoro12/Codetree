#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int pp, p, temp;

    cin >> pp >> p;
    cout << pp << " " << p << " ";

    for (int i = 0; i < 8; i++) {
        temp = pp * 2 + p;
        pp = p;
        p = temp;

        cout << temp << " ";
    }
    return 0;
}