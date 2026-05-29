#include <iostream>

using namespace std;

void Calcul(int &a, int &b) {
    if (a > b) {
        a += 25;
        b *= 2;
    }else {
        a *= 2;
        b += 25;
    }
}

int a, b;

int main() {
    cin >> a >> b;
    Calcul(a, b);
    cout << a << " " << b;


    // Please write your code here.

    return 0;
}