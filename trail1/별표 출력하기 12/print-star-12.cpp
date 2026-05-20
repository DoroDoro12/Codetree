#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int end;

    if (n == 1) {
        end = 1;
    }else {
        end = (n%2 == 0) ? n : n-1;
    }

    for (int i = 0; i < end; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || (j % 2 == 1 && i <= j)) {
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}