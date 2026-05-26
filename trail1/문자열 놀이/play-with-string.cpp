#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            int a, b;
            cin >> a >> b;
            char temp = str[a-1];
            str[a-1] = str[b-1];
            str[b-1] = temp;
            cout << str << "\n";
        }else {
            char x, y;
            cin >> x >> y;
            for (int j = 0; str[j] != '\0'; j++) {
                if (str[j] == x) {
                    str[j] = y;
                }
            }
            cout << str << "\n";
        }
    }
    return 0;
}