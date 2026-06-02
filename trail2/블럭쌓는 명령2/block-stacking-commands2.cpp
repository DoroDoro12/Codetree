#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int place[101] = {};

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            place[j]++;
        }
    }

    int max = 0;

    for (int i = 1; i <= n; i++) {
        if (max < place[i]) max = place[i];
    }

    cout << max;
    return 0;
}