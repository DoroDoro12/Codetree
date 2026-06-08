#include <iostream>
#include <algorithm>
using namespace std;
int n, b;
int p[1000];

int main() {
    // Please write your code here.
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p, p+n);
    int students = 0;
    for (int i = 0; i < n; i++) {
        p[i] /= 2;
        int tmp_sum = 0;
        int tmp_cnt = 0;
        for (int j = 0; j < n; j++) {
            if (tmp_sum + p[j] > b) {
                break;
            }
            tmp_sum += p[j];
            tmp_cnt++;
        }
        p[i] *= 2;
        students = max(students, tmp_cnt);
    }

    cout << students;
    return 0;
}