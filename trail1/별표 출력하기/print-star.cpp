#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 1;
    int n;
    cin >> n;


    for (int i = 0; i < 2*n -1; i++) {
        for (int j = 0; j < cnt; j++) {
            cout << "* ";
        }
        cout << endl;
        if (i < n - 1) {
            cnt++;
        }else {
            cnt--;
        }
    }
    return 0;
}