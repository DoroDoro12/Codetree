#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string n;
        int k, e, m;

        Student(string name, int kor, int eng, int mat) {
            this -> n = name;
            this -> k = kor;
            this -> e = eng;
            this -> m = mat;
        }
        Student() {}
};

bool g_cmp(const Student &a, const Student &b) {
    return a.k + a.e + a.m < b.k + b.e + b.m;
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