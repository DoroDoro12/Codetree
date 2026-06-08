#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int n;
int a1, b1, c1;
int a2, b2, c2;

bool Is_sat(int x, int y) {
    int dif1 = abs(x - y);
    return (dif1 <= 2 || dif1 >= n-2);
}


int main() {
    // Please write your code here.
    cin >> n;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                bool val = false;
                if (Is_sat(i, a1) && Is_sat(j, b1) && Is_sat(k, c1)){
                    val = true;
                }if (Is_sat(i, a2) && Is_sat(j, b2) && Is_sat(k, c2)){
                    val = true;
                }

                if (val) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}