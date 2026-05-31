#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height, weight;

        Person(string name, int height, int weight) {
            this -> name = name;
            this -> height = height;
            this -> weight = weight;
        }
        Person() {}
};

bool h_cmp(const Person a, const Person b) {
    return a.height < b.height;
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
    sort(people, people+n, h_cmp);
    
    for (int i = 0; i < n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}