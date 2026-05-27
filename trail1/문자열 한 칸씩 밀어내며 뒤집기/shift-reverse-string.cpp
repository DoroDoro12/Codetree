#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    int q;
    cin >> str >> q;
    int len = str.length();

    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;

        if (n == 1) {
            str = str.substr(1) + str.substr(0, 1);
        }else if (n == 2) {
            str = str.substr(len-1) + str.substr(0, len-1);
        }else {
            string n_str;
            for (int j = len - 1; j >= 0; j--) {
                n_str += str.substr(j, 1);
                
            }
            str = n_str;
        }
        cout << str << "\n";
    }
    return 0;
}