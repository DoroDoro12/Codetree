#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    char c = 'A';
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n-i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << c << " ";
            if (c == 'Z') {
                c = 'A';
            }else {
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}