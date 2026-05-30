#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        arr[i] = str;
    }

    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}