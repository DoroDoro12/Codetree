#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 0; i < 2*n+1; i++) {
        for (int j = 0; j < 4*n+1; j++) {
            if (j % 2 == 1) {
                cout << " ";
            }else {
                if (i % 2 == 1 && j % 4 == 2) {
                    cout << " ";
                }else {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
    return 0;
}