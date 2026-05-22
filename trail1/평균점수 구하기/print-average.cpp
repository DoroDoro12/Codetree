#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double arr[8];
    double sum = 0;
    
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);

    double avg = sum / 8;
    cout << avg;
    return 0;
}