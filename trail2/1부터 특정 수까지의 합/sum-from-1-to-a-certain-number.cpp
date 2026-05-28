#include <iostream>
using namespace std;

int ReturnTot(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << ReturnTot(n);
    return 0;
}