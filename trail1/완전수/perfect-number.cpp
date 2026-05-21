#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int stt, fin;
    cin >> stt >> fin;
    int cnt = 0;

    for (int i = stt; i <= fin; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}