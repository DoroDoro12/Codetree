#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string n;
        int h, w;

        Person(string n, int h, int w) {
            this -> n = n;
            this -> h = h;
            this -> w = w;
        }
        Person() {}
};

bool cmp (const Person &a, const Person &b) {
    if (a.h == b.h) {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    Person people[10];

    for (int i = 0; i < n; i++) {
        string n;
        int h, w;
        cin >> n >> h >> w;

        people[i] = Person(n, h, w);
    }

    sort(people, people+n, cmp);

    for (int i = 0; i < n; i++) {
        cout << people[i].n << " " << people[i].h << " " << people[i].w << endl;
    }
    return 0;
}