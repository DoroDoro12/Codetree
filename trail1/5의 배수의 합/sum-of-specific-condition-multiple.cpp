#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int stt, fin;
    stt = (a <= b) ? a : b;
    fin = (a <= b) ? b : a;

    for (int i = stt; i <= fin; i++) {
        if (i %  5 == 0) {
            sum += i;
        }
    }

    cout << sum;
    return 0;
}