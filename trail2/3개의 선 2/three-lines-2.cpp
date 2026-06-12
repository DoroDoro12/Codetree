#include <iostream>

using namespace std;
int n;
int x[20];
int y[20];
bool res = false;

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }


    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            for (int k = 0; k <= 10; k++) {
                for (int di = 0; di < 2; di++) {
                    for (int dj = 0; dj < 2; dj++) {
                        for (int dk = 0; dk < 2; dk++) {
                            bool val = true;
                            for (int z = 0; z < n; z++) {
                                int a = x[z];
                                int b = y[z];
                                bool ci, cj, ck;

                                ci = (di) ? (a == i):(b == i);
                                cj = (dj) ? (a == j):(b == j);
                                ck = (dk) ? (a == k):(b == k);

                                if (!(ci || cj || ck)) {
                                    val = false;
                                    break;
                                }
                            }
                            if (val) res = true;
                        }
                    }
                }
            }
        }
    }    
    cout << res;
    return 0;
}