#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int y;
    cin >> y;

    int cnt = 0;

    for (int i = 1; i <= y; i++) {
        if (!(i % 4 != 0 || (i % 100 == 0 && i % 400 != 0))){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}