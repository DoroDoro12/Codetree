#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 >= 90) {
        if (n2 >= 95) {
            cout << 100000;
        }else if (n2 >= 90) {
            cout << 50000;
        }else {
            cout << 0;
        }
    }else {
        cout << 0;
    }
    return 0;
}