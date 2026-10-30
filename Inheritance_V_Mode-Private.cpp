#include <iostream>
using namespace std;

class Parent {
public:
    int x = 10;
};

class Child : private Parent {
public:
    void show() {
        cout << x;
    }
};

int main() {
    Child c;
    c.show();

    // c.x; Error
}