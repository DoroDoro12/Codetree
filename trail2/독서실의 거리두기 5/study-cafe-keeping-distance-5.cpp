#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[20];
string inp;
int max_res;

int main() {
    cin >> n;
    cin >> inp;

    for (int i = 0; i < n; i++) {
        arr[i] = inp[i] - '0';
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) continue;
        arr[i] = 1;
        int min_d = 20;
        int pre_idx = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j] == 1) {
                if (pre_idx == -1) pre_idx = j;
                else {
                    min_d = min(min_d, j - pre_idx);
                    pre_idx = j;
                }
            }
        }
        max_res = max(max_res, min_d);
        arr[i] = 0;
    }

    cout << max_res;
    return 0;
}