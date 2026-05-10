#include <iostream>
using namespace std;

int main() {
    string s1;
    int n;
    cin >> s1;

    n = s1.length();
    s1[1] = 'a';
    s1[n-2] = 'a';
    cout << s1;


    return 0;
}