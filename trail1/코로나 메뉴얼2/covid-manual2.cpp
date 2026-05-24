#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt_arr[5] = {};

    for (int i = 0; i < 3; i++) {
        char c;
        int t;
        cin >> c >> t;

        if (c == 'Y' && t >= 37) {
            cnt_arr[1]++;
        }else if (c == 'N' && t >= 37) {
            cnt_arr[2]++;
        }else if (c == 'Y' && t < 37) {
            cnt_arr[3]++;
        }else {
            cnt_arr[4]++;
        }
    }


    for (int i = 1; i  <= 4; i++) {
        cout << cnt_arr[i] << " ";
    }
    if (cnt_arr[1] >= 2) {
        cout << "E";
    }
    return 0;
}