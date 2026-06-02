#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    // 상쇄값 더함으로써 좌표 범위 0 ~ 200.
    int offset = 100;
    int line[201] = {};

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        a += offset;
        b += offset;
        for (int j = a; j < b; j++) {
            line[j] += 1;
        }
    }

    int max = 0;
    for (int i = 0; i < 200; i++) {
        if (max < line[i]) max = line[i];
    }

    cout << max;
    return 0;
}