#include <iostream>
#include <string>
using namespace std;
int x, y;
int cnt;

int main() {
    // Please write your code here.
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        string tmp = to_string(i);
        int digit[10] = {};
        int cnt_max = 0;
        for (int j = 0; tmp[j]; j++) {
            digit[tmp[j] - '0']++;
        }
        for (int j = 0; j < 10; j++) {
            if (digit[j] > 1){
                cnt_max = digit[j];
            }
        }
        if (cnt_max == tmp.length() - 1) cnt++;
    }
    cout << cnt;


    return 0;
}