#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt = -1;
    int sum = 0;
    double avg;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 250) {
            cnt = i-1;
            break;
        }
    }
    cnt = (cnt == -1) ? 9:cnt;

    for (int i = 0; i <= cnt; i++) {
        sum += arr[i];
    }
    avg = double(sum)/(cnt+1);
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;
}