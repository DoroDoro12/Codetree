#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 2*n-1;

    for (int i = 0; i < 2*n-1; i++) {
        for (int k = 0; k < (2*n-1)-cnt; k++) {
            cout << " ";
        }
        for (int j = 0; j < cnt; j++) {
            cout << "* ";
        }
        cout << endl;
        if (i < n-1) {
            cnt -= 2;
        }else {
            cnt += 2;
        }
    }
    return 0;
}