#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;

    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;

        if (n < temp) {
            n = temp;
        }
    }

    cout << n;
    return 0;
}