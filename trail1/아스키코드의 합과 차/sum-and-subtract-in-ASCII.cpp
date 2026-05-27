#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b;
    cin >> a >> b;

    int dif = (a > b) ? int(a-b):b-a;

    cout << int(a + b) << " " << dif;
    return 0;
}