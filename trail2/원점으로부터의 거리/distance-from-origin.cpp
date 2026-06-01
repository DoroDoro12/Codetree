#include <iostream>
#include <algorithm>
using namespace std;

class Point {
    public:
        int d;
        int n;

        Point(int d, int n){
            this -> d = d;
            this -> n = n;
        }
        Point () {}
};

bool cmp(const Point &a, const Point &b){
    if (a.d == b.d) {
        return a.n < b.n;
    }
    return a.d < b.d;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Point points[1000];

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        x = (x >= 0) ? x : -x;
        y = (y >= 0) ? y : -y;
        int d = x + y;
        points[i] = Point(d, i+1);
    }

    sort(points, points+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << points[i].n << endl;
    }
    return 0;
}