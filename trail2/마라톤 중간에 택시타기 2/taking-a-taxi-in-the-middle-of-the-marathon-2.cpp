#include <iostream>
#include <climits>
using namespace std;

int arrx[100];
int arry[100];

int abs(int x){
    if (x >= 0) return x;
    return -x;
}

int main() {
    // Please write your code here. 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arrx[i] = x;
        arry[i] = y;
    }

    int d_min = INT_MAX;
    for (int i = 1; i < n-1; i++) {
        int d_sum = 0;
        for (int j = 0; j < i-1; j++) {
            d_sum += abs(arrx[j] - arrx[j+1]) + abs(arry[j] - arry[j+1]);
        }
        d_sum += abs(arrx[i-1] - arrx[i+1]) + abs(arry[i-1] - arry[i+1]);
        for (int j = i+1; j < n-1; j++){
            d_sum += abs(arrx[j] - arrx[j+1]) + abs(arry[j] - arry[j+1]);
        }
        d_min = (d_min > d_sum) ? d_sum : d_min;
    }

    cout << d_min;

    return 0;
}