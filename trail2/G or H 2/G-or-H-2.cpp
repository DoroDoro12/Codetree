#include <iostream>
#include <algorithm>
using namespace std;

int n;
char pic[101];


int main() {
    cin >> n;
    int cnt_max = 0;

    for (int i = 0; i < n; i++) {
        int place;
        char alpha;
        cin >> place >> alpha;

        pic[place] = alpha;
    }

    for (int i = 0; i <= 100; i++) {
        for (int j = i; j <= 100; j++) {
            int g_cnt = 0;
            int h_cnt = 0;
            int stt = 100;
            int end = 0;
            for (int k = i; k <= j; k++) {
                if (pic[k] == 'G') {
                    g_cnt++;
                    stt = min(stt, k);
                    end = max(end, k);
                    }
                if (pic[k] == 'H') {
                    h_cnt++;
                    stt = min(stt, k);
                    end = max(end, k);
                }
            }
            if((g_cnt == h_cnt && g_cnt != 0 )|| (g_cnt == 0&&h_cnt != 0) || (h_cnt == 0&&g_cnt !=0)) {
                cnt_max = max(cnt_max, end - stt);
            }
        }
    }
    cout << cnt_max;
    return 0;
}