#include <iostream>

using namespace std;



int main() {
    int n;
    cin >> n;

    int line[200001] = {};
    int p = 100000;

    // 오른쪽이면 검은색 1로 표시, 왼쪽이면 흰색 -1로 표시.
    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if (c == 'R') {
            for (int j = p; j < p + x; j++) {
                line[j] = 1;
            }
            p = p + x - 1;
        }else {
            for (int j = p; j > p - x; j--) {
                line[j] = -1;
            }
            p = p - x + 1;
        }
    }

    int b = 0, w = 0;
    for (int i = 0; i < 200001; i++) {
        if (line[i] == 0) continue;
        if (line[i] == 1) b++;
        else w++;
    }

    cout << w << " " << b;


    return 0;
}