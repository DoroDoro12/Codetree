#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int size;
string istr;
int min_res = INT_MAX;


int main() {
    cin >> size >> istr;

    for (int len = 1; len <= size; len++) {
        int cnt = 0;
        for (int i = 0 ; i+len <= size; i++) {
            string str1 = istr.substr(i, len);
            bool val = true;

            for (int idx = 0; idx+len <= size; idx++) {
                if (idx == i) continue;
                string str2 = istr.substr(idx, len);
                if (str1 == str2) val = false;
            }

            if (!val) cnt++;
        }
        if (cnt == 0) min_res = min(min_res, len);
    }


    cout << min_res;
    return 0;
}