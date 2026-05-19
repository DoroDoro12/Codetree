#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int wid, hei;
    char a = 'A';

    while (a != 'C') {
        cin >> wid >> hei;
        cin >> a;

        cout << wid * hei << endl;
    }
    return 0;
}