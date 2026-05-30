#include <iostream>
using namespace std;

class User {
    public:
        string id;
        int lv;

        User(string id = "codetree", int lv = 10) {
            this->id = id;
            this->lv = lv;
        }
};

int main() {
    // Please write your code here.
    User user1 = User();
    string id;
    int lv;
    cin >> id >> lv;
    User user2 = User(id, lv);

    cout << "user " << user1.id << " lv " << user1.lv << endl;
    cout << "user " << user2.id << " lv " << user2.lv;
    return 0;
}