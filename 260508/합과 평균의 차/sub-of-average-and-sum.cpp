#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum, avg;
    
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = sum / 3;

    cout << sum << "\n" << avg << "\n" << sum - avg;
    return 0;
}