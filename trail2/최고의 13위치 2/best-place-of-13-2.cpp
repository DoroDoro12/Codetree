#include <iostream>
#include <algorithm>
using namespace std;
int arr[20][20];
int n;

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int s_max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-3; j++) {
            for (int k = i; k < n; k++) {
                if (i == k) {
                    for (int p = j+3; p <= n-3; p++) {
                        int t_max = 0;
                        for (int z = 0; z <= 2; z++) {
                            t_max += arr[i][j+z] + arr[k][p+z];
                        }
                        s_max = max(s_max, t_max);
                    }
                }else {
                    for (int p = 0; p <= n-3; p++) {
                        int t_max = 0;
                        for (int z = 0; z < 3; z++) {
                            t_max += arr[i][j+z] + arr[k][p+z];
                        }
                        s_max = max(s_max, t_max);
                    }
                }
            }
        }
    }
    cout << s_max;
    return 0;
}