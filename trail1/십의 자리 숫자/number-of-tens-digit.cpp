#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_arr[10] = {};


    while(1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        n /= 10;
        cnt_arr[n]++;
    }

    for (int i = 1; i <= 9; i++) {
        cout << i << " - " << cnt_arr[i] << endl;
    }
    return 0;
}