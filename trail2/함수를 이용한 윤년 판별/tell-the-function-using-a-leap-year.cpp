#include <iostream>

using namespace std;

bool IsLeapYear(int y) {
    if (y % 4 != 0) 
        return false;
    if (y % 100 != 0)
        return true;
    if (y % 400 != 0)
        return false;
    return true;
}

int y;

int main() {
    cin >> y;
    if (IsLeapYear(y)) {
        cout << "true";
    }else {
        cout << "false";
    }
    // Please write your code here.

    return 0;
}