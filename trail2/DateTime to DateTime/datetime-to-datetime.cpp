#include <iostream>
using namespace std;


// 11월 11일 0시 0분 기준 계산
int to_minutes(int a, int b, int c) {
    int min = c;
    int hour = b;
    int day = a - 11;

    return (c + (b * 60) + (a * 1440));
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    int res = to_minutes(a, b, c) - to_minutes(11, 11, 11);
    res = (res >= 0) ? res : -1;
    cout << res; 
    return 0;
}