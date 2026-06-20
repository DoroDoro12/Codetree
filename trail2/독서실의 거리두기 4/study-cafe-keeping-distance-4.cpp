#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int n;
string inp;
int max_res = INT_MIN;

int main() {
    cin >> n >> inp;

    for (int i = 0; inp[i]; i++) {
        if (inp[i] == '1') continue;
        inp[i] = '1';
        for (int j = i+1; inp[j]; j++) {
            if (inp[j] == '1') continue;
            inp[j] = '1';
            int min_d = INT_MAX;
            int prev = -1;

            for (int k = 0; inp[k]; k++) {
                if (inp[k] == '1') {
                    if (prev == -1) prev = k;
                    else {
                        min_d = min(min_d, k - prev);
                        prev = k;
                    }
                }
            }
            max_res = max(max_res, min_d);
            inp[j] = '0';
        }
        inp[i] = '0';
    }

    cout << max_res;
    return 0;
}