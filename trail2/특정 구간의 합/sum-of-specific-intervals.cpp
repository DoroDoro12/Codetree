#include <iostream>

using namespace std;

int n, m;
int arr[100];

void PartSum(int a1, int a2) {
    int sum = 0;
    for (int i = a1-1; i < a2; i++) {
        sum += arr[i];
    }
    cout << sum << "\n";
}



int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        PartSum(a1, a2);
    }

    // Please write your code here.

    return 0;
}