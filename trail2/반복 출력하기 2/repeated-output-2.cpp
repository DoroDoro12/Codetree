#include <iostream>
using namespace std;

void Hello(int n) {
    if (n == 0) return;

    Hello(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Hello(n);
    return 0;
}