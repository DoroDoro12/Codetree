#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int odd_sum = 0, even_sum = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        if (i % 2 == 0) {
            odd_sum += n;
        }else {
            even_sum += n;
        }
    }

    int result = (even_sum >= odd_sum) ? even_sum-odd_sum:odd_sum-even_sum;
    cout << result;
    return 0;
}