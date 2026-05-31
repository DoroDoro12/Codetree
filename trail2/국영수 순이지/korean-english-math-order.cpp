#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

class Student {
    public:
        string n;
        int k, e, m;

        Student (string name, int kor, int eng, int math) {
            this -> n = name;
            this -> k = kor;
            this -> e = eng;
            this -> m = math;
        }
        Student() {}
};

bool g_cmp(const Student &a, const Student &b) {
    if (a.k == b.k) {
        if (a.e == b.e) {
            return a.m > b.m;
        }else {
            return a.e > b.e;
        }
    }
    return a.k > b.k;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Student students[10];

    for (int i = 0; i < n; i++) {
        string n;
        int k, e, m;
        cin >> n >> k >> e >> m;

        students[i] = Student(n, k, e, m);
    }

    sort(students, students+n, g_cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].n << " " << students[i].k << " ";
        cout << students[i].e << " " << students[i].m << endl;
    }
    return 0;
}