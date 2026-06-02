#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    // 좌표 범위는 -1000 에서 1000까지.. offset 1000
    // 원점 인덱스 1000
    int line[2001] = {};

    // 현재위치 p로 두고... 시작
    int p = 1000;

    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if (c == 'R') {
            for (int j = p; j < p + x; j++) {
                line[j] += 1;
            }
            p += x;
        }else {
            for (int j = p-1; j >= p-x; j--) {
                line[j] += 1;
            }
             p -= x;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        if (1 < line[i]) cnt++;
    }

    cout << cnt;

    return 0;
}