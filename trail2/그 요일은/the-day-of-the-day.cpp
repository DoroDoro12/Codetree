#include <iostream>
using namespace std;

int to_days(int m) {
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    string tgt;
    cin >> tgt;

    int day, week;
    int res = (to_days(m2) + d2) - (to_days(m1) + d1);
    week = res / 7;
    day = res % 7;

    int idx;
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    for (int i = 0; i < 7; i++) {
        if (days[i] == tgt) {
            idx = i;
            break;
        }
    }

    int ans = (idx <= day) ? week + 1 : week;
    cout << ans;
    return 0;
}