#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;
    int l1, l2;

    cin >> a >> b;
    
    bool a_i, b_i;
    a_i = b_i = true;

    for (int i = 0; a[i]; i++) {
        if (!isdigit(a[i])) {
            l1 = stoi(a.substr(0,i));
            a_i = false;
            break;
        }
    }
    
    for (int i = 0; b[i]; i++) {
        if (!isdigit(b[i])) {
            l2 = stoi(b.substr(0,i));
            b_i = false;
            break;
        }
    }
    if (a_i) {
        l1 = stoi(a);
    }
    if (b_i) {
        l2 = stoi(b);
    }

    cout << l1 + l2;
    return 0;
}