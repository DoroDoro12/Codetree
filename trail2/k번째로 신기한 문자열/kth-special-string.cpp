#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string arr[100];
    string tgt;
    int n, k;
    cin >> n >> k;
    cin >> tgt;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        if (arr[i].substr(0, tgt.length()) == tgt) {
            cout << arr[i+k-1];
            break;
        }
    }

    return 0;
}