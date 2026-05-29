#include <iostream>
using namespace std;

void NStars(int n) {
    if (n == 0) return;
    NStars(n-1);
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    NStars(n);
    return 0;
}