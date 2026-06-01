#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = ((60*c) + d) - ((60 * a) + b);
    cout << res;
    return 0;
}