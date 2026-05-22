#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum_2 = 0;
    int sum_3 = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        arr[i] = n;
    }

    for (int i = 1; i < 10; i+=2) {
        sum_2 += arr[i];
    }
    for (int i = 2; i < 10; i+=3) {
        sum_3 += arr[i];
    }
    cout << fixed;
    cout.precision(1);

    double avg = (double)sum_3/3;

    cout << sum_2 << " " << avg;
    return 0;
}