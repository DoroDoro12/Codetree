#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    char c = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << c;
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