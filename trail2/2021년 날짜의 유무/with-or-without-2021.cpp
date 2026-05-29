#include <iostream>
using namespace std;
bool IsValid(int m, int d) {
    if (m > 12 || d > 31) return false;
    if (d <= 28) return true;
    // d는 29, 30, 31만 남음.
    if (m == 2) return false;
    if (d == 29 || d == 30) return true;
    if (m == 4 || m == 6 || m== 9) return false;
    return true;
}

int main() {
    // Please write your code here.
    int m, d;
    cin >> m >> d;
    if (IsValid(m, d)) cout << "Yes";
    else cout << "No";

    return 0;
}