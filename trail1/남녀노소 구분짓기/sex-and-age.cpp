#include <iostream>
using namespace std;

int main() {
    int gen, age;
    cin >> gen >> age;

    if (gen == 0) {
        if (age >= 19) {
            cout << "MAN";
        }else {
            cout << "BOY";
        }
    }else {
        if (age >= 19) {
            cout << "WOMAN";
        }else {
            cout << "GIRL";
        }
    }
    return 0;
}