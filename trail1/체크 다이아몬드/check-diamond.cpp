#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 0; i < 2*n-1; i++) {
        for (int j = 0; j < (n-cnt); j++) {
            cout << " ";
        }
        for (int k = 0; k < cnt; k++) {
            cout << "* ";
        }
        cout << endl;
        if (i < n-1) {
            cnt++;
        }else {
            cnt--;
        }
    }
    return 0;
}