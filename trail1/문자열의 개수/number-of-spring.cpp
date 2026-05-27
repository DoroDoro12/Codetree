#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    string arr[200];

    for(int j = 0; j <= 200; j++) {
        string str;
        cin >> str;
        if (str == "0") {
            break;
        }
        cnt++;
        arr[j] = str;
    }
    cout << cnt << "\n";
    for (int i = 0; i < cnt; i++) {
        if (i % 2 == 0) {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}