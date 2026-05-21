#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int stt, end;
    cin >> stt >> end;
    int cnt = 0;

    for (int i = stt; i <= end; i++) {
        int n_fac = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                n_fac++;
            }
        }
        if (n_fac == 3) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}