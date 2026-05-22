#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int grd;
            cin >> grd;
            sum += grd;
        }

        double avg = (double)sum/4;
        if (avg >= 60) {
            cout << "pass" << endl;
            cnt++;
        }else {
            cout << "fail" << endl;
        }
    }

    cout << cnt;
    return 0;
}