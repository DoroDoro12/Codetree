#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string tot_str;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        tot_str += str;
    }

    cout << tot_str;
    return 0;
}