#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int students[101] = {};
    int n, m, k;
    cin >> n >> m >> k;

    int res = -1;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        students[num]++;
        if (students[num] >= k) {
            res = num;
            break;
        }
    }

    cout << res;
    return 0;
}