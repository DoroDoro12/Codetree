#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 수열 a, b 의 개수 n1, n2입력 받기.
    int n1, n2;
    cin >> n1 >> n2;
    int a[100];
    int b[100];

    // 수열 a, b 입력하기.
    for (int i = 0; i < n1; i++) {
        int n;
        cin >> n;
        a[i] = n;
    }
    for (int i = 0; i < n2; i++) {
        int n;
        cin >> n;
        b[i] = n;
    }

    // 최종 결과 var 일단 false로 초기화. 
    // 
    bool var = false;
    for (int i = 0; i <= n1-n2; i++) {
        // 특정 인덱스에서 발견 했는지 확인.
        bool find = true;
        for (int j = i; j < i + n2; j++) {
            if (a[j] != b[j - i]) {
                find = false;
                break;
            }
        }
        if (find) {
            var = true;
            break;
        }
    }

    if (var) {
        cout << "Yes";
    }else {
        cout << "No";
    }
    return 0;
}