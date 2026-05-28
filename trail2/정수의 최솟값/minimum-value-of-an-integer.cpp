#include <iostream>
using namespace std;

int Min(int a, int b, int c) {
    int min = (a >= b) ? b:a;
    min = (min <= c) ? min:c;

    return min;
}

int main() {
    // Please write your code here.

    int a, b, c;
    cin >> a >> b >> c;
    cout << Min(a, b, c);
    return 0;
}