#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    int idx = -1;

    char n;
    cin >> n;

    for (int i = 0; i < 6; i++) {
        if (n == arr[i]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        cout << "None";
    }else {
        cout << idx;
    }
    return 0;
}