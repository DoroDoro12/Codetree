#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int arr[101] = {};

    for (int i = 0; i < n; i++) {
        int candy, place;
        cin >> candy >> place;

        arr[place] += candy;
    }

    int max_sum = 0;
    for (int center = 0; center <= 100; center++) {
        int stt = (center - k < 0) ? 0 : center-k;
        int end = (center + k > 100) ? 100 : center + k;
        int t_sum = 0;
        for (int j = stt; j <= end; j++) {
            t_sum += arr[j];
        }
        max_sum = max(t_sum, max_sum);
    }

    cout << max_sum;
    return 0;
}