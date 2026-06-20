#include <iostream>
#include <algorithm>
using namespace std;
int arr[15];

int main() {
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+15);

    for (int a = 1; a <= 40; a++) {
        for (int b = a; b <= 40; b++) {
            for (int c = b; c <= 40; c++) {
                for (int d = c; d <= 40; d++) {
                   int tmp[15] = {a, b, c, d, a+b, b+c, c+d, d+a, a+c, b+d, a+b+c, a+b+d, a+c+d, b+c+d, a+b+c+d};
                   sort(tmp, tmp + 15);
                   bool var = true;

                   for (int i = 0; i < 15; i++) {
                    if (arr[i] != tmp[i]) {
                        var = false;
                        break;
                    }
                   }
                   if (var) {
                    cout << a << " " << b << " " << c << " " << d;
                    break;
                   }
                }
            }
        }
    }
    return 0;
}