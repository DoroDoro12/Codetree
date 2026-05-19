#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    int cnt = 0;
    double avg;

    cout << fixed;
    cout.precision(2);

    while(1) {
        cin >> n;
        if (n < 20 || n >= 30) {
            break;
        }
        sum += n;
        cnt++;
    }

    avg = double(sum) / cnt;
    cout << avg;


    return 0;
}