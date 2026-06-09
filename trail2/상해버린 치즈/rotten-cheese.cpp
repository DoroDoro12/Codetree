#include <iostream>
#include <algorithm>
using namespace std;
int n, m, d, s;

int cake[51]; // 1~50번 케이크.. 값은 먹은 사람 수.
int people[51][51]; // 1~50번사람, 1~50번 케이크, 값은 언제 가장 빨리 먹었는지
int sick[51]; // 1~50번 사람 .. 값은 아파진 시각


int main() {
    // Please write your code here.
    cin >> n >> m >> d >> s;

    for (int i = 0; i < d; i++) {
        int p, m, t;
        cin >> p >> m >> t;
        if (people[p][m] == 0) {
            people[p][m] = t;
            cake[m]++;
        }
    }

    for (int i = 0; i < s; i++) {
        int p, t;
        cin >> p >> t;
        sick[p] = t;
    }

    int max_patients = 0;
    for (int i = 1; i <= m; i++) {//i번 케이크 부터 순회
        int val = true;
        for (int j = 1; j <= n; j++) {//아픈사람 j번부터 순회
            if (sick[j] == 0) continue;
            if (people[j][i] == 0 || people[j][i] >= sick[j]) {
                val = false;
                break;
            }
        }
        if (val) {
            max_patients = max(max_patients, cake[i]);
        }
    }
    max_patients = max(max_patients, s);
    cout << max_patients;

    return 0;
}