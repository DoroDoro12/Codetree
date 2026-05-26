#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3];
    
    for (int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        arr[i] = str.length();
    }

    int max, min;
    max = min = arr[0];

    for (int i = 0; i < 3; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }


    cout << max - min;
    return 0;
}