#include <iostream>
#include <algorithm>
using namespace std;
int x, y;

int main() {
    // Please write your code here.
    cin >> x >> y;
    int ans = 0;
    for (int i = x; i <= y; i++) {
        int tmp = 0;
        int num = i;
        while(num){
            tmp += num % 10;
            num = num/10;
        }
        ans = max(ans, tmp);
    }
    cout << ans;
    return 0;
}