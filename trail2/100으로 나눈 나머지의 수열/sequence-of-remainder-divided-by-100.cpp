#include <iostream>
using namespace std;

int NSeq(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    return (NSeq(n-1) * NSeq(n-2)) % 100;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << NSeq(n);
    return 0;
}