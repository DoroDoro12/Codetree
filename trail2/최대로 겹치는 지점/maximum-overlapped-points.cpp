#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    int line[101] = {};
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            line[j] += 1;
        }
    }

    int max = 0;
    for (int i = 0; i < 101; i++) {
        if (max < line[i]) max = line[i];
    }

    cout << max;
    return 0;
}