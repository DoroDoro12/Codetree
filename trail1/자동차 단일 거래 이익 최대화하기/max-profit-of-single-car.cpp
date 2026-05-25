#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[1000];

    int margin = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j] && arr[j] - arr[i] > margin) {
                margin = arr[j] - arr[i];
            } 
        }
    }
    cout << margin;
    return 0;
}