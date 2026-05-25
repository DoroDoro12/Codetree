#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char arr[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            char c;
            cin >> c;

            arr[i][j] = c-32;
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }

    
    return 0;
}