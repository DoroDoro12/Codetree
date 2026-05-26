#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    string r1, r2;
    r1 = (str.find("ee")!= string::npos) ? "Yes" : "No";
    r2 = (str.find("ab")!= string::npos) ? "Yes" : "No";

    cout << r1 << " " << r2;
    return 0;
}