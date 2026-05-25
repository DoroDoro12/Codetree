#include <iostream>

using namespace std;
int main() {
    // Please write your code here.
    int n;
    int arr[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        arr[i] = num;
    }

    // n개 정수 가진 수열 어레이 제작완료.
    int fin = n;

    while (1) {
        int idx = 0;
        for (int i = 0; i < fin; i++) {
            if (arr[idx] < arr[i]) {
                idx = i;
            }
        }

        cout << idx + 1 << " ";
        fin = idx;
        if (idx == 0) {
            break;
        }
    }

    return 0;
}
