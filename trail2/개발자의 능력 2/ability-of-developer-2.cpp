#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int devs[6];

int tot = 0;
int main() {
    // Please write your code here.
    for (int i = 0; i < 6; i++) {
        cin >> devs[i];
        tot += devs[i];
    }


    int m_dif = INT_MAX;
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                if (i == k || j == k) continue;
                for (int m = k+1; m < 6; m++) {
                    if (i == m || j == m) continue;
                    int sum1 = devs[i] + devs[j];
                    int sum2 = devs[k] + devs[m];
                    int sum3 = tot - (sum1 + sum2);

                    int max_t = max({sum1, sum2, sum3});
                    int min_t = min({sum1, sum2, sum3});

                    m_dif = min(m_dif, max_t - min_t);
                }
            }
        }
    }

    cout << m_dif;
    return 0;
}