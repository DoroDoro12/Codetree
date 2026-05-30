#include <iostream>
using namespace std;

class Agent {
    public:
        string s;
        char p;
        int t;

        Agent(string secret, char place, int time) {
            this->s = secret;
            this->p = place;
            this->t = time;
        }
};

int main() {
    // Please write your code here.
    string s;
    char p;
    int t;

    cin >> s >> p >> t;
    Agent agent1 = Agent(s, p, t);
    cout << "secret code : " << agent1.s << endl;
    cout << "meeting point : " << agent1.p << endl;
    cout << "time : " << agent1.t;
    return 0;
}