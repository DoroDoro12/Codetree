#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int code;

        Product(string name = "",int code = 0) {
            this -> name = name;
            this -> code = code;
        }
};

int main() {
    // Please write your code here.
    Product product1 = Product();
    Product product2 = Product();
    string str;
    int n;
    cin >> str >> n;

    product1.name = "codetree";
    product1.code = 50;

    product2.name = str;
    product2.code = n;

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name;
    return 0;
}