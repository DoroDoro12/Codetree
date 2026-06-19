#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;
int n, k;
int arr[1000];
int max_cnt;


int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] - arr[i] <= k && (arr[j] - arr[i] >= 0)) cnt++;
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;



    return 0;
}