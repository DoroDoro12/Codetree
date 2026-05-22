#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i<10; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }else {
            sum += n;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);

    double avg = double(sum) / cnt;
    cout << sum << " " << avg;
    return 0;
}