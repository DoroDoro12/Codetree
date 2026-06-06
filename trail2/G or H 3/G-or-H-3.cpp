#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int pic[10001] = {};

    for (int i = 1; i <= n; i++) {
        int p;
        char c;
        cin >> p >> c;
        pic[p] = c - 'F';
    }

    int m_sum = 0;
    for (int i = 1; i <= 10000-k; i++) {
        int t_sum = 0;
        for (int j = i; j <= i+k; j++) {
            t_sum += pic[j];
        }
        m_sum = max(m_sum, t_sum);
    }

    cout << m_sum;
    return 0;
}