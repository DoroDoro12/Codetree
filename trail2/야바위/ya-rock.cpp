#include <iostream>
#include <algorithm>
using namespace std;
int n;


class Trial {
    public:
        int a, b, c;

        Trial(int a, int b, int c) {
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }
        Trial() {}
};
int main() {
    // Please write your code here.
    cin >> n;
    Trial trial[100];
    int max_cnt = 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        trial[i] = Trial(a, b, c);
    }

    for (int i = 1; i <= 3; i++) {
        int num = i;
        int cnt = 0;
        int cup[4] = {};
        cup[i] = 1;
        for (int j = 0; j < n; j++) {
            int a = trial[j].a;
            int b = trial[j].b;
            int c = trial[j].c;

            int tmp = cup[a];
            cup[a] = cup[b];
            cup[b] = tmp;

            if (cup[c] == 1) cnt++;
        }
        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt;
    return 0;
}