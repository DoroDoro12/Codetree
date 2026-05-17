#include <iostream>
using namespace std;

int main() {
    int a_mat, a_eng, b_mat, b_eng;
    cin >> a_mat >> a_eng >> b_mat >> b_eng;

    if (a_mat > b_mat) {
        cout << "A";
    }else if (a_mat < b_mat) {
        cout << "B";
    }else {
        if (a_eng > b_eng) {
            cout << "A";
        }else {
            cout << "B";
        }
    }
    return 0;
}