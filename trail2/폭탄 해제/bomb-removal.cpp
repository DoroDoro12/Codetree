#include <iostream>
using namespace std;

class Bomb{
    public:
        string c;
        char cl;
        int s;

        Bomb(string code, char color, int second) {
            this -> c = code;
            this -> cl = color;
            this -> s = second;
        }
};

int main() {
    // Please write your code here.
    string code;
    char color;
    int sec;

    cin >> code >> color >> sec;
    Bomb bomb = Bomb(code, color, sec);

    cout << "code : " << bomb.c << endl;
    cout << "color : " << bomb.cl << endl;
    cout << "second : " << bomb.s;
    return 0;
}