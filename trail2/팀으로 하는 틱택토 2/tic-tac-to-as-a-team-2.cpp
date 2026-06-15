#include <iostream>
#include <string>

using namespace std;
string n3[3];
int cnt;


int main() {
    cin >> n3[0] >> n3[1] >> n3[2];

    for (int i = 1; i <= 9; i++) {
        for (int j = i+1; j<= 9; j++) {
            bool val = false;
            for (int k = 0; k < 3; k++) {//가로 한 줄씩.
                int i_cnt = 0;
                int j_cnt = 0;
                for (int r = 0; r < 3; r++) {
                    if (n3[k][r] - '0' == i) i_cnt++;
                    if (n3[k][r] - '0' == j) j_cnt++;
                }
                if (i_cnt + j_cnt == 3 && i_cnt >= 1 && j_cnt >= 1) val = true;
            }

            for (int k = 0; k < 3; k++) {//세로 한 줄씩.
                if (val) break;
                int i_cnt = 0;
                int j_cnt = 0;
                for (int r = 0; r < 3; r++) {
                    if (n3[r][k] - '0' == i) i_cnt++;
                    if (n3[r][k] - '0' == j) j_cnt++;
                }
                if (i_cnt + j_cnt == 3 && i_cnt >= 1 && j_cnt >= 1) val = true;
            }

            for (int k = 0; k < 1; k++) {// 대각선
                if(val) break;
                int i_cnt = 0;
                int j_cnt = 0;
                for (int r = 0; r < 3; r++) {
                    if (n3[r][r] - '0' == i) i_cnt++;
                    if (n3[r][r] - '0' == j) j_cnt++;
                }
                if (i_cnt + j_cnt == 3 && i_cnt >= 1 && j_cnt >= 1) val = true;
            }
            
            for (int k = 0; k < 1; k++) {//대각선
                if(val) break;
                int i_cnt = 0;
                int j_cnt = 0;
                for (int r = 2; r >= 0; r--) {
                    if (n3[2-r][r] - '0' == i) i_cnt++;
                    if (n3[2-r][r] - '0' == j) j_cnt++;
                }
                if (i_cnt + j_cnt == 3 && i_cnt >= 1 && j_cnt >= 1) val = true;
            }
            if (val) cnt++;
        }
    }

    cout << cnt;
    return 0;
}