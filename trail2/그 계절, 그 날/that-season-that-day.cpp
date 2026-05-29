#include <iostream>

using namespace std;

string Weather(int m) {
    if (m <= 2 || m >= 12) return "Winter";
    if (m <= 5) return "Spring";
    if (m <= 8) return "Summer";
    return "Fall";
}


bool IsLeapYear(int y) {
    if (y % 4 != 0) return false;
    if (y % 100 != 0) return true;
    if (y % 400 == 0) return true;
    return false;
}


int LastDay(int y, int m) {
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2) {
        if (IsLeapYear(y)) return 29;
        else return 28;
    }
    else return 31;
}


bool IsValid(int y, int m, int d) {
    int lastday = LastDay(y, m);
    if (d > lastday) {
        return false;
    }else {
        return true;
    }
}


int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if (IsValid(y, m, d)) {
        cout << Weather(m);
    }else {
        cout << -1;
    }

    return 0;
}