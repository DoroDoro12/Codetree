#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int n, k;
int arr[100];
int min_res = INT_MAX;

bool Is_Possible(int a) {
    int index[100];
    int cnt = 1;

    index[0] = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= a) {
            index[cnt++] = i;
        }
    }

    for (int i = 1; i < cnt; i++) {
        if (index[i] - index[i-1] > k) return false;
    }
    return true;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int tmp = arr[i];
        if (tmp < arr[0] || arr[n-1] > tmp) continue;
        if (!Is_Possible(tmp)) continue;
        min_res = min(min_res, tmp);
    }

    cout << min_res;
    return 0;
}