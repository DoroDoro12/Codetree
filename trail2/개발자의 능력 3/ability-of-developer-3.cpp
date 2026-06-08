#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
int sum;

int devs[6];

int team_diff(int i, int j, int k) {
    int t1_sum = devs[i] + devs[j] + devs[k];
    int t2_sum = sum - t1_sum;
    return abs(t1_sum - t2_sum);
}

int main() {
    // Please write your code here.
    for (int i = 0; i < 6; i++) {
        cin >> devs[i];
        sum += devs[i];
    }

    int min_d = INT_MAX;
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = j+1; k < 6; k++) {
                int dif = team_diff(i, j, k);
                min_d = min(min_d, dif);
            }
        }
    }

    cout << min_d;
    return 0;
}