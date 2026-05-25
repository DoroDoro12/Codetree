#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;

        if (num == 1) {
            int idx;
            cin >> idx;
            idx -= 1;

            cout << arr[idx] << endl;
        }
        else if (num == 2) {
            int tgt;
            cin >> tgt;

            int idx = -1;
            for (int i = 0; i < n; i++) {
                if (tgt == arr[i]) {
                    idx = i+1;
                    break;
                }
            }

            if (idx == -1) {
                cout << 0 << endl;
            }else {
                cout << idx << endl;
            }
        }else {
            int stt, end;
            cin >> stt >> end;
            stt -= 1;
            end -= 1;

            for (int i = stt; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}