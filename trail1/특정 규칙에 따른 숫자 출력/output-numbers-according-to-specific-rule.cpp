#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 1;
    
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n-i; j++) {
            cout << "  ";
        }
        for (int k = 0; k < i; k++) {
            cout << cnt << " ";
            cnt++;
            if (cnt == 10) {
                cnt = 1;
            }
        }
        cout << endl;

    }
    return 0;
}