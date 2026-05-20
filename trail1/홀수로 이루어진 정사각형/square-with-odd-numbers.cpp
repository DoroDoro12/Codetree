#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int stt = 11;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << stt + (2*j) << " ";
        }
        stt += 2;
        cout << endl;
    }
    return 0;
}