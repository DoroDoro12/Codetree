#include <iostream>
using namespace std;
void Plus(int a, int b) {
    cout << a << " + " << b << " = " << a + b;
}
void Minus(int a, int b){
    cout << a << " - " << b << " = " << a - b;
}
void Divide(int a, int b) {
    cout << a << " / " << b << " = " << a / b;
}
void Product(int a, int b) {
    cout << a << " * " << b << " = " << a * b;
}

int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;
    if (o == '+') {
        Plus(a, c);
    }
    else if (o == '-') {
        Minus(a, c);
    }
    else if (o == '/') {
        Divide(a, c);
    }
    else if (o == '*') {
        Product(a, c);
    }else {
        cout << "False";
    }

    return 0;
}