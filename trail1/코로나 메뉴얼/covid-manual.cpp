#include <iostream>
using namespace std;

int main() {
    char s1, s2, s3;
    int t1, t2, t3;
    int t, cnt;

    cin >> s1 >> t1 >> s2 >> t2 >> s3 >> t3;
    t = t1 + t2 + t3;
    
    if (s1 == 'N' || t1 < 37) {
        if ((s2 == 'N' || t2 < 37) || (s3 == 'N' || t3 < 37)) {
            cout << "N";
        }else {
            cout << "E";
        }
    } else {
        if ((s2 == 'N' || t2 < 37) && (s3 == 'N' || t3 < 37)) {
            cout << "N";
        }else {
            cout << "E";
        }
    }



    return 0;
}