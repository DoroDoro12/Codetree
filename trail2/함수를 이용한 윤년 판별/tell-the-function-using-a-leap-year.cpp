#include <iostream>
using namespace std;
bool IsLeapYear(int n) {
    if (n % 4 != 0) {
        return false;
    }else {
        if (n % 100 == 0 && n % 400 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Please write your code here.
    int y;
    cin >> y;

    if (IsLeapYear(y)) {
        cout << "true";
    }else {
        cout << "false";
    }
    return 0;
}