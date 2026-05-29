#include <iostream>

using namespace std;

void Oscil(int n) {
    if (n == 0) return;
    cout << n << " ";
    Oscil(n-1);
    cout << n << " ";
}


int N;

int main() {
    cin >> N;
    Oscil(N);
    // Please write your code here.

    return 0;
}