#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    cin >> n;

    for (int i = 1;;i++) {
        int prod = n * i;
        cout << prod << " ";
        if (prod % 5 == 0) {
            cnt++;
        }
        if (cnt == 2) {
            break;
        } 
    }
    return 0;
}