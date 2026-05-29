#include <iostream>
using namespace std;

int Counter(int n) {
    if (n == 1) return 0;

    if (n % 2 == 0) {
        return Counter(n/2) + 1;
    }else {
        return Counter(n/3) + 1;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << Counter(n);
    return 0;
}