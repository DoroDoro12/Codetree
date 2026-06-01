#include <iostream>
using namespace std;

int to_days(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += days[i];
    }

    return sum + d;
}

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int res = to_days(m2, d2) - to_days(m1, d1);
    res %= 7;
    res = (res >= 0) ? res : res+7;

    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << day[res];


    return 0;
}