#include <iostream>
using namespace std;

bool IsPrime(int n) {
    bool val = true;
    if (n == 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            val = false;
        }
    }
    return val;
}

bool IsEven(int n) {
    int sum = 0;
    while (n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    if (sum % 2 == 0) {
        return true;
    }else {
        return false;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (IsEven(i) && IsPrime(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}