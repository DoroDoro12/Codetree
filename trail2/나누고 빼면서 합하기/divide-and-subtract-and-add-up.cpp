#include <iostream>

using namespace std;

int n, m;
int A[100];

int Cal() {

    int sum = 0;
    sum += A[m-1];
    while (m != 1) {
        if (m % 2 == 1) {
            m -= 1;
        }else {
            m /= 2;
        }
        sum += A[m-1];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int sum = Cal();
    cout << sum;
    

    // Please write your code here.

    return 0;
}