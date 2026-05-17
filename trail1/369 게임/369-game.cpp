#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int ten = i / 10;
        int one = i % 10;
        if ((i % 3 == 0) || (ten != 0 && ten % 3 == 0) || (one != 0 && one % 3 == 0)) {
            cout << 0 << " ";
        }else {
            cout << i << " ";
        }
    }
    return 0;
}