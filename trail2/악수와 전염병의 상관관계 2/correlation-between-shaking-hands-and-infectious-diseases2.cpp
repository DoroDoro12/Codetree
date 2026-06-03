#include <iostream>
#include <algorithm>
using namespace std;

class Event{
    public:
        int t, d1, d2;

        Event(int t, int d1, int d2) {
            this -> t = t;
            this -> d1 = d1;
            this -> d2 = d2;
        }
        Event() {}
};

bool cmp(const Event &a, const Event &b) {
    return a.t < b.t;
}

int main() {
    // Please write your code here.
    int N, K, P, T;
    cin >> N >> K >> P >> T;
    int dev[101] = {};
    dev[P] = 1;

    Event events[250];

    for (int i = 0; i < T; i++) {
        int t, n1, n2;
        cin >> t >> n1 >> n2;
        events[i] = Event(t, n1, n2);
    }

    sort(events, events+T, cmp);

    for (int i = 0; i < T; i++) {
        int d1 = events[i].d1;
        int d2 = events[i].d2;

        if (dev[d1] == 0 || dev[d2] == 0) {
            if (dev[d1] >= 1 && dev[d1] < K+1) {
                dev[d1]++;
                dev[d2]++;
            }else if(dev[d2] >= 1 && dev[d2] < K+1) {
                dev[d1]++;
                dev[d2]++;
            }
        }else {
            dev[d1]++;
            dev[d2]++;
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << (dev[i] > 0);
    }

    return 0;
}