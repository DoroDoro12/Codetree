#include <iostream>
using namespace std;

int m_to_d(int m) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += days[i];
    }
    return sum;
}

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int res = (m_to_d(m2) + d2) - (m_to_d(m1) + d1) + 1;
    cout << res;
    return 0;
}