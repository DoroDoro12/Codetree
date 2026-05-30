#include <iostream>
using namespace std;

class Agent {
    public:
        char c;
        int g;
        Agent(char c, int g) {
            this -> c = c;
            this -> g = g;
        }

        Agent() {}
};

int main() {
    // Please write your code here.
    Agent agents[5];
    for (int i = 0; i < 5; i++) {
        char c;
        int g;
        cin >> c >> g;
        agents[i] = Agent(c, g);
    }

    int idx = 0;
    int min = agents[0].g;
    for (int i = 1; i < 5; i++) {
        if (min > agents[i].g) {
            min = agents[i].g;
            idx = i;
        }
    }

    cout << agents[idx].c << " " << agents[idx].g;
    return 0;
}