#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;

int main() {
    // Please write your code here.
    cin >> a >> b >> c;
    int max_res = 0;
    int max_i = c / a;
    int max_j = c / b;

    for (int i = 0; i <= max_i; i++) {
        for (int j = 0; j <= max_j; j++) {
            int res = a * i + b * j;
            if (res <= c) max_res = max(max_res, res);
        }
    }

    cout << max_res;
    return 0;
}