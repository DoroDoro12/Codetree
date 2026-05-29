#include <iostream>
using namespace std;

int MagicSum(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    return MagicSum(n-2) + n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << MagicSum(n);
    return 0;
}