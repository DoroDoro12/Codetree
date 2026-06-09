#include <iostream>
#include <algorithm>
using namespace std;
int n, b;

class Price {
    public:
        int p, s;

        Price(int p, int s) {
            this -> p = p;
            this -> s = s;
        }
        Price() {}
};

int main() {
    // Please write your code here.
    cin >> n >> b;

    Price prices[1000];
    for (int i = 0; i < n; i++) {
        int p, s;
        cin >> p >> s;
        prices[i] = Price(p, s);
    }


    int ans = 0;
    for (int i = 0; i < n; i++) {
        prices[i].p /= 2;
        int tmp = 0;
        int cnt = 0;
        int total[1000];
        for (int j = 0; j < n; j++) {
            total[j] = prices[j].p + prices[j].s;
        }
        sort(total, total+n);
        for (int k = 0; k < n; k++) {
            if (tmp + total[k] > b) break;
            tmp += total[k];
            cnt++;
        }
        prices[i].p *= 2;
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}