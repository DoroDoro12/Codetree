#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    bool sat = true;

    for (int i = 1; i <= 5; i++) {
        cin >> n;
        if (n % 3 != 0) {
            sat =false;
        }
    }
    cout << sat;
    return 0;
}