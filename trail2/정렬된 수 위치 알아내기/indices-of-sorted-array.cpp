#include <iostream>
#include <algorithm>

class Seq{
    public:
        int n, p;

        Seq(int n, int p){
            this -> n = n;
            this -> p = p;
        }

        Seq() {}
};

bool cmp(const Seq &a, const Seq &b) {
    if (a.n == b.n) {
        return a.p < b.p;
    }
    return a.n < b.n;
}

using namespace std;



int main() {
    int n;
    cin >> n;
    Seq seq[1000];

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        seq[i] = Seq(a, i+1);
    }

    sort(seq, seq+n, cmp);
    int n_to_rank[1001];
    for (int i = 0; i < n; i++) {
        n_to_rank[seq[i].p] = i+1;
    }
    for (int i = 1; i <= n; i++) {
        cout << n_to_rank[i] << " ";
    }

    return 0;
}
