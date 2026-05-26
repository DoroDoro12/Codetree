#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[10];
    char c;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cin >> c;
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int n = arr[i].length();
        if (arr[i][n-1] == c) {
            cout << arr[i] << "\n";
            cnt++;
        } 
    }

    if (cnt == 0) {
        cout << "None";
    }
    return 0;
}