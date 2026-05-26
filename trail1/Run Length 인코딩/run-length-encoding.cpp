#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    int len = A.length();
    string str;

    int cnt = 0;

    // Please write your code here.
    for (int i = 0; i <= len; i++) {
        if (i == 0 || A[i-1] == A[i]) {
            cnt++;
        }else {
            str += A[i-1] + to_string(cnt);
            cnt = 1;
        }
    }

    cout << str.length() << "\n" << str;

    return 0;
}
