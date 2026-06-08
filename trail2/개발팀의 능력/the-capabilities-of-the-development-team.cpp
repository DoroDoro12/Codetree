#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int dev[5];

int main() {
    // Please write your code here.
    int tot = 0;
    for (int i = 0; i < 5; i++) {
        cin >> dev[i];
        tot += dev[i];
    }

    int min_dif = 1000;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = j+1; k < 5; k++) {
                if (i == j || i == k) continue;

                int t1 = dev[i];
                int t2 = dev[j] + dev[k];
                int t3 = tot - (t1 + t2);
                if (t1 == t2 || t2 == t3 || t3 == t1) continue;

                int tmp = abs(t1 - t2);
                tmp = max(tmp, abs(t2 - t3));
                tmp = max(tmp, abs(t3 - t1));
                min_dif = min(tmp, min_dif);
            }
        }
    }

    if (min_dif == 1000) cout << -1;
    else cout << min_dif;
    return 0;
}