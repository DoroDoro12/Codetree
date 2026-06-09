#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
int bomb[100];

int main() {
    // Please write your code here.
    int max_num = -1;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> bomb[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i-k; j <= i+k; j++) {
            if (j < 0 || j > n || i == j) continue;
            if (bomb[i] == bomb[j]) {
                max_num = max(max_num, bomb[i]);
            }
        }
    }

    cout << max_num;
    return 0;
}