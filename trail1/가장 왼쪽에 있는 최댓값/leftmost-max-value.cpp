#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 입력할 n개 숫자 입력
    int n;
    int arr[1000];
    cin >> n;

    // n개 숫자 입력한 arr 수열 만들기
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }


    // 최대인덱스 설정
    int idx = n;


    while (1) {
        int max = 0;
        n = idx;
        for (int i = 0; i < n; i++) {
            if (max <= arr[i]) {
                max = arr[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (max == arr[i]) {
                idx = i;
                break;
            }
        }

        if (idx == 0) {
            cout << idx+1;
            break;
        }else {
            cout << idx+1 << " ";
        }
    }
    return 0;
}