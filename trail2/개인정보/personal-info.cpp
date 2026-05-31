#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        string n;
        int h;
        double w;
        Person(string n, int h, double w) {
            this -> n = n;
            this -> h = h;
            this -> w = w;
        }
        Person() {}
};

bool n_cmp (const Person &a, const Person &b) {
    return a.n < b.n;
}

bool h_cmp (const Person &a, const Person &b) {
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);
    Person people[5];
    for (int i = 0; i < 5; i++) {
        string n;
        int h;
        double w;
        cin >> n >> h >> w;

        people[i] = Person(n, h, w);
    }

    sort(people, people+5, n_cmp);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << people[i].n << " " << people[i].h << " " << people[i].w << endl;
    }

    sort(people, people+5, h_cmp);
    cout << endl << "height" << endl;
    for (int i = 0; i < 5; i++) {
        cout << people[i].n << " " << people[i].h << " " << people[i].w << endl;
    }
    return 0;
}