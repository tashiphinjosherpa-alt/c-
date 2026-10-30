#include <iostream>
using namespace std;

class Parent {
public:
    int x = 10;
};

class Child : public Parent {
};

int main() {
    Child c;
    cout << c.x;
}