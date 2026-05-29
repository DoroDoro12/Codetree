#include <iostream>
using namespace std;

void Ascend(int n) {
    if (n == 0) return;
    Ascend(n-1);
    cout << n << " ";
}

void Descend(int n) {
    if (n == 0) return;
    cout << n << " ";
    Descend(n-1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Ascend(n);
    cout << "\n";
    Descend(n);

    return 0;
}