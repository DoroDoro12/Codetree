#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            int n;
            cin >> n;
            arr[i][j] = n;
            if (i >= j) {
                sum += n;
            }
        }
    }

    cout << sum;
    return 0;
}