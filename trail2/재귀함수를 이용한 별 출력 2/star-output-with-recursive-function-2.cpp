#include <iostream>
using namespace std;

void Stars2N(int n) {
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        cout << "*" << " ";
    }
    cout << endl;
    Stars2N(n-1);
    for (int i = 0; i < n; i++) {
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Stars2N(n);
    return 0;
}