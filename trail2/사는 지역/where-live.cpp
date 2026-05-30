#include <iostream>
using namespace std;

class Resident {
    public:
        string name, address, region;

        Resident(string name, string address, string region) {
            this -> name = name;
            this -> address = address;
            this -> region = region;
        }
        Resident() {}
};

int main() {
    // Please write your code here.
    Resident residents[10];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, add, reg;
        cin >> name >> add >> reg;
        residents[i] = Resident(name, add, reg);
    }

    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (residents[i].name > residents[idx].name) {
            idx = i;
        }
    }


    cout << "name " << residents[idx].name << endl;
    cout << "addr " << residents[idx].address << endl;
    cout << "city " << residents[idx].region;

    return 0;
}