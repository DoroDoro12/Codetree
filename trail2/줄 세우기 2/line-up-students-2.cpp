#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int h, w, n;

        Student(int h, int w, int n){
            this -> h = h;
            this -> w = w;
            this -> n = n;
        }

        Student() {}
};

bool cmp(const Student &a, const Student &b) {
    if (a.h == b.h) {
        return a.w > b.w;
    }
    return a.h < b.h;
}


int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Student students[1000];

    for (int i = 0; i < n; i++) {
        int h, w;
        cin >> h >> w;
        students[i] = Student(h, w, i+1);
    }

    sort(students, students+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << students[i].h << " " << students[i].w << " ";
        cout << students[i].n << endl;
    }
    return 0;
}