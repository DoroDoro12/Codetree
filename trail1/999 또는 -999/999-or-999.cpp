#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int min = 1000;
    int max = -1000;

    while (1) {
        int n;
        cin >> n;
        if (n == 999 || n == -999) {
            cout << max << " " << min;
            break;
        }

        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }
    return 0;
}