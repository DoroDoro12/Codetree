#include <iostream>
#include <algorithm>
using namespace std;

int n;
int cnt;    
int arr[100];


int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 2; i <= 99; i++) {
        int i_cnt = 0;
        for (int j = 0; j <= n-2; j++) {
            for (int k = j+1; k < n; k++) {
                int c1 = min(arr[j], arr[k]);
                int c3 = max(arr[j], arr[k]);

                if (c3 - i == i - c1) i_cnt++;
            }
        }
        cnt = max(cnt, i_cnt);
    }


    cout << cnt;
    return 0;
}