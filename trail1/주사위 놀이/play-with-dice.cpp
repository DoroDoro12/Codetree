#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_arr[7] = {};

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        cnt_arr[n]++;
    }

    for (int i = 1; i <= 6; i++) {
        cout << i << " - " << cnt_arr[i] << endl;
    }
    return 0;
}