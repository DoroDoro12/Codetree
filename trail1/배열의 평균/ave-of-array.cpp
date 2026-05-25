#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];
    int sum = 0;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            int n;
            cin >> n;
            sum += n;
            arr[i][j] = n;

        }
    }

    double row1 = double(arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3]) / 4;
    double row2 = double(arr[1][0] + arr[1][1] + arr[1][2] + arr[1][3]) / 4;
    double col1 = double(arr[0][0] + arr[1][0]) / 2;
    double col2 = double(arr[0][1] + arr[1][1]) / 2;
    double col3 = double(arr[0][2] + arr[1][2]) / 2;
    double col4 = double(arr[0][3] + arr[1][3]) / 2;

    cout << fixed;
    cout.precision(1);

    cout << row1 << " " << row2 << "\n";
    cout << col1 << " " << col2 << " " << col3 << " " << col4 << "\n";
    cout << double(sum)/8;
    return 0;
}