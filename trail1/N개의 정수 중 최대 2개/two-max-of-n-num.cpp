#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int pre, deux;
    if (arr[0] > arr[1]) {
        pre = arr[0];
        deux = arr[1];
    }else {
        pre = arr[1];
        deux = arr[0];
    }

    int temp;
    for (int i = 2; i < n; i++) {
        if (arr[i] > deux) {
            if (arr[i] > pre) {
                temp = pre;
                pre = arr[i];
                deux = temp;
            }else {
                deux = arr[i];
            }
        }
    }
    cout << pre << " " << deux;


    return 0;
}