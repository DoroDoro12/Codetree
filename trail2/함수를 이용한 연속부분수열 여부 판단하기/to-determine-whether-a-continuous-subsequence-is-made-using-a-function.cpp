#include <iostream>

using namespace std;

bool IsSubsequence(int a[], int n1, int b[], int n2) {
    for (int i = 0; i <= n1-n2; i++) {
        bool val = true;
        for (int j = 0; j < n2; j++) {
            if (a[i+j] != b[j]) val = false;
        }
        if (val) return val;
    }
    return false;
}

int n1, n2;
int a[100], b[100];

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if (IsSubsequence(a, n1, b, n2)) {
        cout << "Yes";
    }else {
        cout << "No";
    }

    return 0;
}