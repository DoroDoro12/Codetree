#include <iostream>

using namespace std;

int Strange(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return Strange(n/3) + Strange(n-1);
}

int N;

int main() {
    cin >> N;
    cout << Strange(N);


    return 0;
}