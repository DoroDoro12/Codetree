#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    int sum = 0;


    for (int i =  start; i <= end; i++) {
        int fac = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                fac += 1;
            }
        }
        if (fac == 3) {
            sum += 1;
        }

    }

    cout << sum;


    return 0;
}