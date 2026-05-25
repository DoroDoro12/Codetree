#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int over_500 = 1001;
    int under_500 = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        if (n > 500) {
            if (over_500 > n) {
                over_500 = n;
            }
        }else {
            if (under_500 < n) {
                under_500 = n;
            }
        }
    }

    cout << under_500 << " " << over_500;
    return 0;
}