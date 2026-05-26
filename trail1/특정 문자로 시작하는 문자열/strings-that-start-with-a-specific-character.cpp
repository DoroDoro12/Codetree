#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string arr[20];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (c == arr[i][0]) {
            cnt++;
            sum += arr[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << cnt << " " << (double)sum/cnt;
    return 0;
}