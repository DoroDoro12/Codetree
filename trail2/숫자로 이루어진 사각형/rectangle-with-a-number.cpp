#include <iostream>
using namespace std;
void PrintRec(int n) {
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt++;
            if (cnt == 10) {
                cnt = 1;
            }
        }
        cout << "\n";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    PrintRec(n);
    
    return 0;
}